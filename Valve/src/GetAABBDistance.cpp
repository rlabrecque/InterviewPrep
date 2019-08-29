#include "main.h"

#include <math.h>

// Find shortest distance between axis-aligned rectangles  
// From: https://www.glassdoor.ca/Interview/Valve-Corporation-Embedded-Software-Engineer-Interview-Questions-EI_IE24849.0,17_KO18,44.htm

struct Vec3 {
public:
	Vec3() : x( 0 ), y( 0 ), z( 0 ) {}
	Vec3( float _x, float _y, float _z ) : x( _x ), y( _y ), z( _z ) {}

	float x, y, z;
};

struct AABB {
	AABB() {}
	AABB( Vec3 _origin, Vec3 _extents ) : origin( _origin ), extents( _extents ) {}

	Vec3 origin;
	Vec3 extents;

	inline Vec3 mins() {
		return Vec3(origin.x - extents.x, origin.y - extents.y, origin.z - extents.z);
	}

	inline Vec3 maxs() {
		return Vec3( origin.x + extents.x, origin.y + extents.y, origin.z + extents.z );
	}
};

// The way this works is, for each axis we're going to get the distance between the two closest sides.
// For example on the x axis with: Amins = (1,1) Amaxs = (3,3), Bmins = (5,5) Bmaxs = (7,7)
// 8|
// 7|          ___
// 6|         | B |
// 5|         |___|
// 4|  ___
// 3| |   |
// 2| | A |
// 1| |___|
// 0|-------------------
//  0 1 2 3 4 5 6 7 8
//
// First we check the left side of A with: Amins.x - Bmaxs.x == 1 - 7 == -6
// We already know it won't be on the left because of the 0 which we use to check if the axis is overlapping is of course
// greater than this already.
// We then check the right side of A with: Bmins.x - Amaxs.x == 5 - 3 == 2
// 2 is greater than 0, so we're 2 units away in this axis.
// dist.x = 2.
//
// We do this for each axis and then use the standard sqrt on the squared length of the dist vector to the final distance.
float GetDistance( AABB A, AABB B ) {
	Vec3 Amins = A.mins();
	Vec3 Amaxs = A.maxs();
	Vec3 Bmins = B.mins();
	Vec3 Bmaxs = B.maxs();

	Vec3 dist;
	dist.x = fmaxf( Amins.x - Bmaxs.x, fmaxf( 0, Bmins.x - Amaxs.x ) );
	dist.y = fmaxf( Amins.y - Bmaxs.x, fmaxf( 0, Bmins.y - Amaxs.y ) );
	dist.z = fmaxf( Amins.z - Bmaxs.z, fmaxf( 0, Bmins.z - Amaxs.z ) );

	return sqrtf( dist.x * dist.x + dist.y * dist.y + dist.z * dist.z );
}

void GetAABBDistance() {
	AABB A( Vec3( 4, 4, 4 ), Vec3( 1, 1, 1 ) );
	AABB B( Vec3( -4, -4, -4 ), Vec3( 2, 2, 2 ) );
	
	printf( "Dist: %f\n", GetDistance( A, B ) );
}
