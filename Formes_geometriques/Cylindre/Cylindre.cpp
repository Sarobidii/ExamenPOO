#include <iostream>
#include <string>
#include "../formes_geometriques.hpp"
using namespace std;
using namespace FormesGeometriques;
Cylindre::Cylindre()
{
}
Cylindre::~Cylindre()
{
}
void Cylindre::afficher()
{
        cout << "Hauteur :"<< hauteur << endl;
        cout << "Rayon :" << rayon << endl;
        cout << "Couleur :" << couleur << endl;
}
double Cylindre::getHauteur()
{
	return(hauteur);
}
double Cylindre::getRayon()
{
	return(rayon);
}
string Cylindre::getCouleur()
{
	return(couleur);
}
void setRayon(double rayon)
{
	this->rayon = rayon;
}
void setHauteur(double hauteur)
{
	this->hauteur = hauteur;
}
void setCouleur(string couleur)
{
	this->couleur = couleur;
}
