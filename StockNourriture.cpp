#include <iostream>
#include "StockNourriture.h"
using namespace std;

StockNourriture::StockNourriture(float qte) : qteTotale(qte) {}

bool StockNourriture::distribuer(float qte) {
    if (qte <= qteTotale) {
        qteTotale -= qte;
        cout << ">> Nourriture distribuee : -" << qte << "kg" << endl;
        return true;
    }
    cout << "!! Stock insuffisant pour nourrir les animaux !" << endl;
    return false;
}

void StockNourriture::afficherStock() const {
    cout << "--- Stock Nourriture : " << qteTotale << " kg ---" << endl;
}
