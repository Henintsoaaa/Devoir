
#include <iostream>
#include "../Header/Sphere.h"
#include "../Header/Point3D.h"
#define pi 3.14
using namespace std;
// constructeur de la classe cercle 
Sphere::Sphere()
{
	
}
Sphere::Sphere(Point3D O, float x)
{
	origine = O;
	rayon = x;
}
Sphere::~Sphere()
{
	
}
float Sphere::getRayon()
{
	return rayon;
}
Point3D Sphere::getOrigine()
{
	return origine;
}
void Sphere::setRayon(float newRayon)
{
	rayon = newRayon;
}
void Sphere::setOrigine(Point3D newOrigine)
{
	origine = newOrigine;
}

// Affichage des données

void Sphere::display()
{
	cout << "Sphere de: " << "centre O" ;
	origine.display();
	cout << "Rayon: " << rayon << endl;
}
// Calcul d'aire
void Sphere::aire()
{
    float aire = 4*pi*rayon*rayon;
    cout << "L'aire de ce sphere est: " << aire  << endl;
}
// Calcul d'volume
void Sphere::volume()
{
    float volume = (4/3)*pi*rayon*rayon*rayon;
    cout << "Le volume de ce sphere est: " << volume << endl;
}