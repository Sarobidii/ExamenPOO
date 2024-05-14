#include <string>

using namespace std;
namespace Activation
{
	class Ouvrir 
	{
		private:
			string vraiCle;
			int pointsRestants;

		public:
			Ouvrir();
			~Ouvrir();
			void setVraiCle(string vraiCle);
			string getVraiCle();
			void setPointsRestants(int pointsRestants);
			int getPointsRestants();
			bool verifierActivation(string fichierCle);
	};
}

