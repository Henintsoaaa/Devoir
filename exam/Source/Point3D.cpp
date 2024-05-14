#include <iostream>
#include "../Header/Point3D.h"
#include "../Header/Point.h"
using namespace std;
Point3D::Point3D()
{

}
Point3D::Point3D(float abs, float ord, float z)
{
	Point(abs,ord);
	this->z = z;
}
Point3D::~Point3D()
{
	
}

void Point3D::display()
{
	Point::display();
	cout << "z: " << z << endl;
}
void Point3D::setZ(float newZ)
{
	z = newZ;
}

