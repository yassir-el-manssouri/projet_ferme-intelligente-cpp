#include <iostream>
#include <vector>
// Inclusions de nos modules
#include "ReservoirEau.h"
#include "Serre.h"
#include "Animal.h"
#include "StockNourriture.h"
#include "Statistiques.h"

using namespace std;

int main() {
    // 1. Instanciation (Création des objets)
    ReservoirEau leReservoir(200);   // 200 Litres max
    Serre laSerre(25.0, 60.0);       // 25°C, 60% humidité
    StockNourriture leStock(100);    // 100 kg de grain
    Statistiques lesStats;           // Compteur à 0

    // Utilisation de vector pour gérer la liste des animaux
    vector<Animal> troupeau;
    troupeau.push_back(Animal("Vache Marguerite", "Bon"));
    troupeau.push_back(Animal("Mouton Shaun", "Moyen"));
    troupeau.push_back(Animal("Poule Cocotte", "Bon"));

    int choix = 0;

    // 2. Boucle du Menu Principal
    do {
        cout << "\n--- GESTION FERME INTELLIGENTE ---" << endl;
        cout << "1. Gestion Eau (Arroser/Remplir)" << endl;
        cout << "2. Gestion Serre (Climat)" << endl;
        cout << "3. Gestion Animaux (Voir etat)" << endl;
        cout << "4. Gestion Stocks (Nourrir)" << endl;
        cout << "5. Afficher Statistiques & Couts" << endl;
        cout << "0. Quitter" << endl;
        cout << "Votre choix : ";
        cin >> choix;
        cout << endl;

        switch (choix) {
            case 1: // EAU
                leReservoir.afficherEtat();
                cout << "   1. Arroser (20L)\n   2. Remplir un peu (+50L)\n   3. Remplir tout\n   Choix : ";
                int sousChoix;
                cin >> sousChoix;
                
                if (sousChoix == 1) {
                    // Si l'arrosage réussit, on met à jour les stats
                    if(leReservoir.arroser(20)) {
                        lesStats.ajouterConsoEau(20);
                    }
                } 
                else if (sousChoix == 2) {
                    // Utilisation de la surcharge : remplir(float)
                    leReservoir.remplir(50.0);
                } 
                else if (sousChoix == 3) {
                    // Utilisation de la surcharge : remplir()
                    leReservoir.remplir();
                }
                break;

            case 2: // SERRE
                laSerre.afficherClimat();
                cout << "Nouvelle temperature cible ? ";
                float t;
                cin >> t;
                laSerre.setTemperature(t);
                break;

            case 3: // ANIMAUX
                cout << "--- ETAT DU TROUPEAU ---" << endl;
                // Parcours du vecteur
                for (size_t i = 0; i < troupeau.size(); i++) {
                    troupeau[i].afficherEtat();
                }
                break;

            case 4: // NOURRITURE
                leStock.afficherStock();
                cout << "Donner 10kg aux animaux ? (1:Oui / 0:Non) : ";
                int rep;
                cin >> rep;
                if (rep == 1) {
                    // Si distribution OK, on met à jour les stats
                    if(leStock.distribuer(10)) {
                        lesStats.ajouterConsoNourriture(10);
                    }
                }
                break;

            case 5: // STATS
                lesStats.afficherRapport();
                break;

            case 0:
                cout << "Fermeture de l'application..." << endl;
                break;

            default:
                cout << "Choix invalide." << endl;
        }

    } while (choix != 0);

    return 0;
}
