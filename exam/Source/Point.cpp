#include <iostream>
#include "../Header/Point.h"

using namespace std;
// Point::Point()
// {

// }
Point::Point(float abs, float ord)
{
	x = abs;
	y = ord;
}
Point::~Point()
{
	
}

void Point::display()
{
	cout <<"("<< x << "," << y << ")" << endl;
}
void Point::setX(float newAbs)
{
	x = newAbs;
}
void Point::setY(float newOrd)
{
	y = newOrd;
}
