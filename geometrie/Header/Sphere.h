#ifndef SPHERE_H
#define SPHERE_H

#include "./Point3D.h"
class Sphere{
	public:
		Sphere(Point3D O, float x);
		Sphere();
		~Sphere();
		float getRayon();
		Point3D getOrigine();
		void setRayon(float newRayon);
		void setOrigine(Point3D newOrigine);
		void display();
		void aire();
        void volume();
	protected:
		Point3D origine;
		float rayon;
};
#endif