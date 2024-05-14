#include <iostream>
#include <string>
#include "Ouvrir.hpp"
using namespace std;
using namespace Activation;
int main() 
{
  int pointsMax = 5; 
  Ouvrir programme = Ouvrir();
  programme.setPointsRestants(pointsMax);
  programme.setVraiCle("1234567891");   
  string fichierActivation = "clé_activation.txt";  
  if (programme.verifierActivation(fichierActivation)) 
  {
    cout << "Le programme est maintenant activé et prêt à fonctionner." << endl;
  } else {
    cout << "Échec d'activation. Il vous reste " << programme.getPointsRestants() << " tentatives restantes." << endl;
  } 
  return 0;
}
