#include <iostream>
#include <string>
#include "../formes_geometriques.hpp"
using namespace std;
using namespace FormesGeometriques;
Triangle::Triangle()
{
}
Triangle::~Triangle()
{
}
void Triangle::setCote1(double cote1)
{
	this->cote1 = cote1;
}
void Triangle::setCote2(double cote2)
{
	this->cote2 = cote2;
}
void Triangle::setCote3(double cote3)
{
	this->cote3 = cote3;
}
double Triangle::getCote1()
{
	return(cote1);
}
double Triangle::getCote2()
{
	return(cote2);
}
double Triangle::getCote3()
{
	return(cote3);
}
string Triangle::getCouleur()
{
	return(couleur);
}
void Triangle::setCouleur(string couleur)
{
	this->couleur = couleur;
}
void Triangle::afficher()
{
	cout << " Cote 1 : " << cote1 << endl;
	cout << " Cote 2 : " << cote2 << endl;
	cout << " Cote 3 : " << cote3 << endl;
	cout << " Couleur : " << couleur << endl;
}

