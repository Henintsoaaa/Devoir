#include <iostream>
#include "../Header/Cercle.h"
#include "../Header/Point.h"
#include "../Header/Cylindre.h"
#define pi 3.14
using namespace std;
// constructeur de la classe cercle 
Cylindre::Cylindre(Cercle c, float z)
{
	base = c;
	hauteur = z;
}
Cylindre::~Cylindre()
{
	
}
Cercle Cylindre::getBase()
{
	return base;
}
float Cylindre::getHauteur()
{
	return hauteur;
}
void Cylindre::setBase(Cercle newBase)
{
	base = newBase;
}
void Cylindre::setHauteur(float newHauteur)
{
	hauteur = newHauteur;
}

// Affichage des données

void Cylindre::display()
{
	cout << "Cylindre de: " << endl << "Base" << endl ;
    base.display();
	cout << "Hauteur: " << hauteur << endl;
}


// Calcul d'aire
void Cylindre::aire()
{
    float aire = 2*pi*base.getRayon()*hauteur;
    cout << "L'aire de ce cylindre est: " << aire << endl;
}
// Calcul du volume
void Cylindre::volume()
{
    float volume = pi*base.getRayon()*base.getRayon()*hauteur;
    cout << "Le volume de ce cylindre est: " << volume << endl;
}