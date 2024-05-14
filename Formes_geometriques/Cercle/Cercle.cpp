#include <iostream>
#include <string>
#include <cmath>
#include "../formes_geometriques.hpp"
using namespace std;
using namespace FormesGeometriques;
Cercle::Cercle()
{
}
Cercle::~Cercle()
{
}
void Cercle::afficher()
{
        cout << "Coordonnée du centre : (" << centreX << "," << centreY << ")" << endl;
        cout << "Rayon :" << rayon << endl;
        cout << "Couleur :" << couleur << endl;
}
double Cercle::getRayon()
{
	return(rayon);
}
string Cercle::getCouleur()
{
	return(couleur);
}
double Cercle::getCentreX()
{
	return(centreX);
}
double Cercle::getCentreY()
{
	return(centreY);
}
void Cercle::setRayon(double rayon)
{
		this->rayon = rayon;
}
void Cercle::setCentreX(double centreX)
{
        this->centreX = centreX;
}
void Cercle::setCentreY(double centreY)
{
        this->centreY = centreY;
}
void Cercle::setCouleur(string couleur)
{
        this->couleur = couleur;
}
double Cercle::perimetre()
{
	return(2*M_PI*rayon);
}
double Cercle::surface()
{
	return(M_PI*pow(rayon,2));
}
void Cercle::agrandir(double dr)
{
	rayon += dr;
}
void Cercle::changeCouleur()
{
	int nbr;
	cout << "1.Rouge" << endl;
	cout << "2.Bleu" << endl;
	cout << "3.Vert" << endl;
	cout << "Entrez votre choix : ";
	cin >> nbr;
	switch(nbr){
		case 1:
			setCouleur("rouge");
			break;
		case 2:
			setCouleur("bleu");
			break;
		case 3:
			setCouleur("vert");
			break;
		default:
			cout << "Ce choix n'est pas disponible" << endl;
			break;
	}
}

