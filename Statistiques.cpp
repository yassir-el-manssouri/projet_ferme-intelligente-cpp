#include <iostream>
#include "Statistiques.h"
using namespace std;

Statistiques::Statistiques() {
    eauConso = 0;
    nourritureConso = 0;
}

void Statistiques::ajouterConsoEau(float qte) {
    eauConso += qte;
}

void Statistiques::ajouterConsoNourriture(float qte) {
    nourritureConso += qte;
}

void Statistiques::afficherRapport() const {
    float coutTotal = (eauConso * PRIX_EAU) + (nourritureConso * PRIX_NOURRITURE);
    
    cout << "\n=== RAPPORT FINANCIER ===" << endl;
    cout << "Eau consommee : " << eauConso << " L (Cout : " << eauConso * PRIX_EAU << " E)" << endl;
    cout << "Nourriture    : " << nourritureConso << " kg (Cout : " << nourritureConso * PRIX_NOURRITURE << " E)" << endl;
    cout << "-------------------------" << endl;
    cout << "COUT TOTAL    : " << coutTotal << " E" << endl;
    cout << "=========================" << endl;
}
