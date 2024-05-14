#include <string>

using namespace std;
namespace FormesGeometriques
{
	class Point
	{
        private:
                double x,y;
        public:
                Point(){};
                ~Point(){}
                void afficher();
                void setX(double xv);
                void setY(double yv);
	};

	class Rectangle 
	{
		private:
			int longueur,largeur;
			string couleur;
		public:
			Rectangle();
			~Rectangle();
			void afficher();
			int getLongueur();
			int getLargeur();
			string getCouleur();
			void setLongueur(int lngr);
			void setLargeur(int lgr);
			void setCouleur(string coul);
	};
	class Cercle:public Point
	{
        private:
                double rayon;
                double centreX;
                double centreY;
                string couleur;
        public:
                Cercle();
                ~Cercle();
                void afficher();
                void setRayon(double rayon);
                void setCouleur(string couleur);
                void setCentreX();
                void setCentreY();
		double getRayon();
		string getCouleur();
		double getCentreX();
		double getCentreY();
		double perimetre();
		double surface();
		void agrandir(double dr);
		void changeCouleur();
	};
	class Carree
	{
		private:
			double cote;
			string couleur;
		public:
			Carree();
			~Carree();
			void setCote(double cote);
			double getCote();
			void setCouleur(string couleur);
			string getCouleur();
			void afficher();
	};
	class Triangle
	{
		private:
			double cote1,cote2,cote3;
			string couleur;
		public:
			Triangle();
			~Triangle();
			double getCote1();
			double getCote2();
			double getCote3();
			string getCouleur();
			void setCote1(double cote1)
			void setCote2(double cote2)
			void setCote3(double cote3);
			void setCouleur(string couleur);
			void afficher();
	};
	class Cylindre
	{
		private:
			double rayon;
			double hauteur;
			string couleur;
			string couleur;
		public:
			Cylindre();
			~Cylindre();
			double getRayon();
			double getHauteur();
			string getCouleur();
			void setRayon(double rayon);
			void setHauteur(double hauteur);
			void setCouleur(string couleur);
			void afficher();
	};
	
}
	
