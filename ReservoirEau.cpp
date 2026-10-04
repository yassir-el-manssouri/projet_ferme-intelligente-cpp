#include <iostream>
#include "ReservoirEau.h"
using namespace std;

ReservoirEau::ReservoirEau(float capacite) {
    capaciteMax = capacite;
    niveauActuel = capacite; // Commence plein
}

bool ReservoirEau::arroser(float quantite) {
    if (quantite <= niveauActuel) {
        niveauActuel -= quantite;
        cout << ">> Succes : Arrosage de " << quantite << "L effectue." << endl;
        return true;
    } else {
        cout << "!! Erreur : Niveau d'eau insuffisant !" << endl;
        return false;
    }
}

// Version 1 : Remplir à ras bord
void ReservoirEau::remplir() {
    niveauActuel = capaciteMax;
    cout << ">> Reservoir completement rempli." << endl;
}

// Version 2 : Ajouter un peu d'eau (Surcharge)
void ReservoirEau::remplir(float quantite) {
    if (niveauActuel + quantite <= capaciteMax) {
        niveauActuel += quantite;
        cout << ">> Ajout de " << quantite << "L d'eau." << endl;
    } else {
        niveauActuel = capaciteMax;
        cout << ">> Reservoir rempli a fond (le surplus a deborde)." << endl;
    }
}

void ReservoirEau::afficherEtat() const {
    cout << "--- Reservoir : " << niveauActuel << " / " << capaciteMax << " Litres ---" << endl;
}
