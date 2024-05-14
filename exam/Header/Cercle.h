#ifndef CERCLE_H
#define CERCLE_H

#include "./Point.h"
class Cercle{
	public:
		Cercle(Point O, float x);
		Cercle();
		~Cercle();
		float getRayon();
		Point getOrigine();
		void setRayon(float newRayon);
		void setOrigine(Point newOrigine);
		void display();
		void perimetre();
		void aire();
	protected:
		Point origine;
		float rayon;
};
#endif
