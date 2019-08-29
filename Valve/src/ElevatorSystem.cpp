#include "main.h"
#include <vector>
#include <algorithm>
#include <conio.h>
#include <map>
#include <functional>

static int s_selectedFloor = 0;
static bool s_bInElevator = false;

enum EMovementDir {
	k_EMovementDir_Down = -1,
	k_EMovementDir_Idle = 0,
	k_EMovementDir_Up = 1,
};

const char* EnumToString(EMovementDir e) {
	switch (e) {
	case k_EMovementDir_Down: return "Down";
	case k_EMovementDir_Idle: return "Idle";
	case k_EMovementDir_Up: return "Up";
	}

	return "";
}

enum ERequestDir {
	k_ERequestDir_Down,
	k_ERequestDir_Up,
};

struct FloorState_t {
	bool bPressed[2];
	int BeingServicedBy[2];
};

class CElevator {
public:
	void Init(int maxFloors);

	bool RunFrame();

	void MoveTo( int floor );

	EMovementDir GetMovementDir() { return m_MovementDir; };
	int GetCurrentFloor() { return m_CurrentFloor; };
//private:
	
	int m_CurrentFloor = 0;
	EMovementDir m_MovementDir = k_EMovementDir_Idle;
	std::vector<bool> m_vecRequestedFloors;
};

void CElevator::Init(int maxFloors) {
	m_vecRequestedFloors = std::vector<bool>(maxFloors);
}

bool CElevator::RunFrame() {
	bool servicedFloor = false;
	/*EMovementDir moveDir = m_MovementDir;
	if (moveDir == k_EMovementDir_Idle) {
	if (m_CurrentFloor != 0) {
	moveDir = k_EMovementDir_Down;
	}
	}*/
	if (m_MovementDir == k_EMovementDir_Idle) {
		return false;
	}

	// Move to the next agacent floor
	printf("Moving %s from %d.\n", EnumToString(m_MovementDir), m_CurrentFloor);
	m_CurrentFloor += m_MovementDir;

	// Check if we have reached a destination.
	if (m_vecRequestedFloors[m_CurrentFloor]) {
		m_vecRequestedFloors[m_CurrentFloor] = false;
		printf("Stopping on %d, Opening doors.\n", m_CurrentFloor);
		servicedFloor = true;
	}

	// Check if there are more requested floors going this direction.
	bool bHasMoreFloors = false;
	for (int i = 0; i < m_vecRequestedFloors.size(); ++i) {
		bHasMoreFloors |= m_vecRequestedFloors[i];
	}

	if (!bHasMoreFloors) {
		m_MovementDir = k_EMovementDir_Idle;
	}

	return servicedFloor;
}

void CElevator::MoveTo( int floor ) {
	if (floor == m_CurrentFloor)
	{
		OutputDebugStringA("[Warning] Elevator is already on this floor!\n");
		return;
	}
	
	if ((m_MovementDir == k_EMovementDir_Down && floor < m_CurrentFloor) || ((m_MovementDir == k_EMovementDir_Up && floor > m_CurrentFloor)))
	{
		OutputDebugStringA("[Warning] Tried moving to a floor in the opposite direction that we are traveling.\n");
		return;
	}

	printf("Stop requested on %d.\n", floor);
	m_vecRequestedFloors[floor] = true;
	m_MovementDir = (m_CurrentFloor > floor) ? k_EMovementDir_Down : k_EMovementDir_Up;
}

class CElevatorSystem {
public:
	CElevatorSystem(int nElevators, unsigned int minFloor, unsigned int maxFloor);

	void RunFrame();

	void RequestElevator(int floor, ERequestDir dir);
private:
	void SendRequestToElevator(int floor, ERequestDir dir);

	void DebugView();
	const unsigned int m_nMinFloor;
	const unsigned int m_nMaxFloor;
	std::vector<CElevator> m_vecElevators;
	std::vector<FloorState_t> m_vecFloors;
};

CElevatorSystem::CElevatorSystem(int nElevators, unsigned int minFloor, unsigned int maxFloor) :
	m_nMinFloor(minFloor),
	m_nMaxFloor(maxFloor),
	m_vecElevators(nElevators),
	m_vecFloors(maxFloor)
{
	for (int i = 0; i < m_vecFloors.size(); ++i) {
		m_vecFloors[i].BeingServicedBy[k_ERequestDir_Down] = -1;
		m_vecFloors[i].BeingServicedBy[k_ERequestDir_Up] = -1;
	}

	for (int i = 0; i < m_vecElevators.size(); ++i) {
		m_vecElevators[i].Init(maxFloor);
	}
}

void CElevatorSystem::RunFrame() {
	DebugView();

	for (int i = 0; i < m_nMaxFloor; ++i) {
		if (m_vecFloors[i].bPressed[k_ERequestDir_Down] && m_vecFloors[i].BeingServicedBy[k_ERequestDir_Down] == -1) {
			SendRequestToElevator(i, k_ERequestDir_Down);
		}

		if (m_vecFloors[i].bPressed[k_ERequestDir_Up] && m_vecFloors[i].BeingServicedBy[k_ERequestDir_Up] == -1) {
			SendRequestToElevator(i, k_ERequestDir_Up);
		}
	}

	for (int i = 0; i < m_vecElevators.size(); ++i) {
		bool bServicedFloor = m_vecElevators[i].RunFrame();
		if (bServicedFloor) {
			int servicedFloor = m_vecElevators[i].GetCurrentFloor();
			if (m_vecFloors[servicedFloor].BeingServicedBy[k_ERequestDir_Down] == i) {
				m_vecFloors[servicedFloor].bPressed[k_ERequestDir_Down] = false;
				m_vecFloors[servicedFloor].BeingServicedBy[k_ERequestDir_Down] = -1;
			}
			if (m_vecFloors[servicedFloor].BeingServicedBy[k_ERequestDir_Up] == i) {
				m_vecFloors[servicedFloor].bPressed[k_ERequestDir_Up] = false;
				m_vecFloors[servicedFloor].BeingServicedBy[k_ERequestDir_Up] = -1;
			}
		}
	}
}

void CElevatorSystem::SendRequestToElevator(int floor, ERequestDir dir) {
	for (int i = 0; i < m_vecElevators.size(); ++i) {
		if (m_vecElevators[i].GetMovementDir() == k_EMovementDir_Idle) {
			m_vecElevators[i].MoveTo(floor);
			m_vecFloors[i].BeingServicedBy[dir] = i;
			return;
		}

		/*if (m_vecElevators[i].GetMovementDir() == k_EMovementDir_Down && m_vecElevators[i].GetCurrentFloor() > floor && !bUp) {
			m_vecElevators[i].MoveTo(floor);
			bUp ? m_vecFloors[i].UpBeingServicedBy = i : m_vecFloors[i].DownBeingServicedBy = i;
			break;
		}

		if (m_vecElevators[i].GetMovementDir() == k_EMovementDir_Up && m_vecElevators[i].GetCurrentFloor() < floor && bUp) {
			m_vecElevators[i].MoveTo(floor);
			bUp ? m_vecFloors[i].UpBeingServicedBy = i : m_vecFloors[i].DownBeingServicedBy = i;
			break;
		}*/
	}
}

void CElevatorSystem::RequestElevator(int floor, ERequestDir dir) {
	//printf("Stop requested on %d for an elevator going %s.\n", floor, EnumToString(dir));
	m_vecFloors[floor].bPressed[dir] = true;
}

void CElevatorSystem::DebugView() {
	system("cls");

	printf("  |============================================================|\n");
	for (int i = m_nMaxFloor - 1; i >= 0; --i) {
		printf("  |                                                            | %c\n", m_vecFloors[i].bPressed[k_ERequestDir_Up] ? '^' : ' ');

		std::string floor(60, '_');
		for (int j = 0; j < m_vecElevators.size(); ++j) {
			if (m_vecElevators[j].GetCurrentFloor() == i) {
				floor = floor.substr(0, 4 + (j*8)) + "[--]" + floor.substr(4 + (j * 8) + 4);
			}
		}

		printf("%d |%s| %c %s\n", i, floor.c_str(), m_vecFloors[i].bPressed[k_ERequestDir_Down] ? 'v' : ' ', (i == s_selectedFloor) ? "\\o/" : "");
	}
}

void InitElevator()
{
	CElevatorSystem elevatorSystem(3, 0, 10);

	while (true) {
		if (_kbhit())
		{
			bool bEscapeHit = false;

			int keypress = _getch();

			if ( keypress == 27 ) {
				return; // Exit the loop.
			}

			if (keypress == 224) { // Escape sequence
				keypress = _getch();
				if (keypress == 72) { // Up Arrow
					OutputDebugStringA("Up\n");
					elevatorSystem.RequestElevator(s_selectedFloor, k_ERequestDir_Up);
				}
				else if (keypress == 80) { // Down Arrow
					OutputDebugStringA("Down\n");
					elevatorSystem.RequestElevator(s_selectedFloor, k_ERequestDir_Down);
				}
			}

			if (isdigit(keypress)) {
				s_selectedFloor = keypress - 48;
			}
		}

		elevatorSystem.RunFrame();
		Sleep(500);
	}
}
