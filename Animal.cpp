#include "Animal.h"
using namespace std;

Animal::Animal(string n, string etat) : nom(n), etatSante(etat) {}

void Animal::afficherEtat() const {
    cout << "Animal : " << nom << " | Sante : " << etatSante << endl;
}
