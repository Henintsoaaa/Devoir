
#include <iostream>
#include "../Header/Cercle.h"
#include "../Header/Point.h"
#define pi 3.14
using namespace std;
// constructeur de la classe cercle 
Cercle::Cercle()
{
	
}
Cercle::Cercle(Point O, float x)
{
	origine = O;
	rayon = x;
}
Cercle::~Cercle()
{
	
}
float Cercle::getRayon()
{
	return rayon;
}
Point Cercle::getOrigine()
{
	return origine;
}
void Cercle::setRayon(float newRayon)
{
	rayon = newRayon;
}
void Cercle::setOrigine(Point newOrigine)
{
	origine = newOrigine;
}

// Affichage des données

void Cercle::display()
{
	cout << "Cercle de: " << "centre O" ;
	origine.display();
	cout << "Rayon: " << rayon << endl;
}

// Calcul du perimetre
void Cercle::perimetre()
{
	float per = 2*pi*rayon;
	cout << "Le perimetre de ce cercle est: " << per << endl;
}
// Calcul d'aire
void Cercle::aire()
{
    float aire = pi*rayon*rayon;
    cout << "L'aire de ce cercle est: " << aire << endl;
}
