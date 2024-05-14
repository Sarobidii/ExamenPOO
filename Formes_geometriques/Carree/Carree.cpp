#include <iostream>
#include <string>
#include "../formes_geometriques.hpp"
using namespace std;
using namespace FormesGeometriques;
Carree::Carree()
{
}
Carree::~Carree()
{
}
void Carree::setCote(double cote)
{
	this->cote = cote;
}
double Carree::getCote()
{
	return(cote);
}
string Carree::getCouleur()
{
	return(couleur);
}
void Carree::setCouleur(string couleur)
{
	this->couleur = couleur;
}
void Carree::afficher()
{
	cout << " Cote : " << cote << endl;
	cout << " Couleur : " << couleur << endl;
}


