#include "main.h"

#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image_write.h"

// Implement a function in C to draw a circle using the single point drawing function drawPt(x, y).
// From: https://www.glassdoor.ca/Interview/Implement-a-function-in-C-to-draw-a-circle-using-the-single-point-drawing-function-drawPt-x-y-QTN_121426.htm

// Additional Reading:
// http://moishelettvin.blogspot.ca/2005/12/programming-interviews-sort-of-exposed.html
// http://www.helixsoft.nl/articles/circle/sincos.htm

constexpr float PI = 3.14159265358979323846f;

static const int WIDTHHEIGHT = 80;

struct MyRGB {
	unsigned char r, g, b;
};

void drawPt(MyRGB(&bitmap)[WIDTHHEIGHT][WIDTHHEIGHT], int x, int y) {
	bitmap[y][x].r = 255;
	bitmap[y][x].g = 255;
	bitmap[y][x].b = 255;
}

void DisplayBitmap(MyRGB (&bitmap)[WIDTHHEIGHT][WIDTHHEIGHT]) {
	stbi_write_png("circle.png", WIDTHHEIGHT, WIDTHHEIGHT, 3, (void*)bitmap, 0);
	system("circle.png");
}

// Attempt 4, 
void DrawCircle( unsigned int radius, int centerX, int centerY ) {
	printf( "Draw Circle\n" );

	static MyRGB bitmap[WIDTHHEIGHT][WIDTHHEIGHT];
	memset( bitmap, 127, sizeof( bitmap ) );

	int r2 = (radius * radius);
	for ( int x = radius, y = 0; y <= x; ++y) {
		printf( "x, y: %d, %d\n", x, y );

		drawPt( bitmap, centerX + x, centerY + y );
		drawPt( bitmap, centerX + x, centerY - y );
		drawPt( bitmap, centerX - x, centerY + y );
		drawPt( bitmap, centerX - x, centerY - y );
		drawPt( bitmap, centerX + y, centerY + x );
		drawPt( bitmap, centerX + y, centerY - x );
		drawPt( bitmap, centerX - y, centerY + x );
		drawPt( bitmap, centerX - y, centerY - x );

		printf( "x2, y2, r2, x2+y2-r2: %d, %d, %d, %d\n", x*x, y*y, r2, x*x + y*y - r2 );

		int dist = abs( x*x + y*y - r2 );
		int prevDist = abs( x*x + (y-1)*(y-1) - r2 );
		if ( dist > prevDist ) {
			--x;
		}
	}

	DisplayBitmap( bitmap );
	getchar();
}

// Attempt 3, Sqrt
/*void DrawCircle( float radius, int centerX, int centerY ) {
	printf( "Draw Circle\n" );

	static MyRGB bitmap[WIDTHHEIGHT][WIDTHHEIGHT];
	memset( bitmap, 127, sizeof( bitmap ) );

	float r2 = (radius * radius);
	for ( int x = r2, y = 0; y < x; ++y) {
		x = (int)(sqrt( r2 - (y*y) ));

		printf( "x, y: %d, %d\n", x, y );

		drawPt( bitmap, centerX + x, centerY + y );
		drawPt( bitmap, centerX + x, centerY - y );
		drawPt( bitmap, centerX - x, centerY + y );
		drawPt( bitmap, centerX - x, centerY - y );
		drawPt( bitmap, centerX + y, centerY + x );
		drawPt( bitmap, centerX + y, centerY - x );
		drawPt( bitmap, centerX - y, centerY + x );
		drawPt( bitmap, centerX - y, centerY - x );

	}

	DisplayBitmap( bitmap );
	getchar();
}*/

// Attempt 2, essentially vectorized, calling sinf/cosf MUCH less.
/*
void DrawCircle( float radius, int centerX, int centerY ) {
	printf( "Draw Circle\n" );

	static MyRGB bitmap[WIDTHHEIGHT][WIDTHHEIGHT];
	memset( bitmap, 127, sizeof( bitmap ) );

	for ( float deg = 0; deg < (PI / 4.0f); deg += 0.1f ) {
		int x = (int)(sinf( deg ) * radius);
		int y = (int)(cosf( deg ) * radius);

		printf( "x, y: %d, %d\n", x, y );
		printf( "deg: %f\n", deg );

		drawPt( bitmap, centerX + x, centerY + y );
		drawPt( bitmap, centerX + x, centerY - y );
		drawPt( bitmap, centerX - x, centerY + y );
		drawPt( bitmap, centerX - x, centerY - y );
		drawPt( bitmap, centerX + y, centerY + x );
		drawPt( bitmap, centerX + y, centerY - x );
		drawPt( bitmap, centerX - y, centerY + x );
		drawPt( bitmap, centerX - y, centerY - x );
	}

	DisplayBitmap( bitmap );
	getchar();
}*/

// Attempt 1:
/*void DrawCircle( float radius, int centerX, int centerY ) {
	printf( "Draw Circle\n" );

	static MyRGB bitmap[WIDTHHEIGHT][WIDTHHEIGHT];
	memset( bitmap, 127, sizeof( bitmap ) );

	for ( float deg = 0; deg < (PI * 2); deg += 0.1f ) {
		float x = sinf( deg );
		float y = cosf( deg );

		printf( "x, y: %f, %f\n", x, y );
		printf( "deg: %f\n", deg );

		drawPt( bitmap, centerX + x * radius, centerY + y * radius );
	}

	DisplayBitmap( bitmap );
	getchar();
}*/
