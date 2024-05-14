#include <iostream>
#include "../formes_geometriques.hpp"
using namespace std;
using namespace FormesGeometriques;
void Point::afficher()
{
	cout << "(" << x << "," << y << ")"<< endl;
}
void Point::setX(double xv)
{
        x=xv;
}
void Point::setY(double yv)
{
        y=yv;
}
