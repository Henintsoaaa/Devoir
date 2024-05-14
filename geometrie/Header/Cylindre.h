#ifndef CYLINDRE_H
#define CYLINDRE_H
#include "./Point.h"
#include "./Cercle.h"
class Cylindre{
	public:
		Cylindre(Cercle c, float z);
		~Cylindre();
		Cercle getBase();
		float getHauteur();
		void setBase(Cercle newBase);
		void setHauteur(float newHauteur);
		void display();
		void volume();
		void aire();
	protected:
		Cercle base;
		float hauteur;
};
#endif
