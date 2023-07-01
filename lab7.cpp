/*  INF3105 - Structures de données et algorithmes
    Lab7
    Pour compiler: g++ -o lab7 lab7.cpp
*/

#include <iostream>
#include <fstream>


class Historique{
  private:
    // Représentation

  public:
    void ajouter(double date, double temp);
    double estimerTemperature(double date) const;
    double calculerMoyenne(double debut, double fin) const;
};

int main(int argc, char** argv)
{
    if(argc<2) {
        std::cerr << "./lab7 fichier.txt" << std::endl;
        return 1;
    }

    std::ifstream in(argv[1]);
    Historique h;
    while(in){
        double d, t;
        in >> d >> t;
        if(in)
            h.ajouter(d,t);
    }

    while(std::cin){
        double d1, d2;
        std::cin >> d1 >> d2;
        if(std::cin){
            double t1 = h.estimerTemperature(d1);
            double t2 = h.estimerTemperature(d2);
            double moy = h.calculerMoyenne(d1,d2);
            std::cout << "t1=" << t1 << '\t' << "t2=" << t2 << '\t' << moy << std::endl;
        }
    }
    return 0;
}

void Historique::ajouter(double date, double temp)
{
    // À compléter.
}

double Historique::estimerTemperature(double date) const
{
    // À compléter.
    return 0;
}

double Historique::calculerMoyenne(double debut, double fin) const
{
    // À compléter.
    return 0;
}

