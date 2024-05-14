#include <fstream>
#include <iostream>
#include <string>
#include "Ouvrir.hpp"
using namespace std;

namespace Activation
{
	Ouvrir::Ouvrir()
{
}
Ouvrir::~Ouvrir()
{
}
void Ouvrir::setVraiCle(string vraiCle) 
{
    this->vraiCle = vraiCle;
}
void Ouvrir::setPointsRestants(int pointsRestants)
{
	this->pointsRestants = pointsRestants;
}
int Ouvrir::getPointsRestants()
{
    return(pointsRestants);
}
bool Ouvrir::verifierActivation(string fichierCle) 
{
	if (pointsRestants == 0) 
	{
		return false;
	}

	ifstream fichierInput(fichierCle);
	if (!fichierInput.is_open()) 
	{
		cout << "Échec d'activation : Le fichier clé '" << fichierCle << "' est introuvable." << endl;
		pointsRestants--;
		return false;
	}

	string ligneCle;
	getline(fichierInput, ligneCle);
	fichierInput.close();

	if (ligneCle == vraiCle) 
	{
		cout << "Activation réussie ! Le programme peut démarrer." << endl;
		return true;
	} else {
		cout << "Échec d'activation : La clé d'activation est incorrecte." << endl;
		pointsRestants--;
		return false;
	}
}

}