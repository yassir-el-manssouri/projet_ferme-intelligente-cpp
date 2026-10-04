#ifndef STATISTIQUES_H
#define STATISTIQUES_H

class Statistiques {
private:
    float eauConso;
    float nourritureConso;
    const float PRIX_EAU = 0.5;      // 0.5€ le litre
    const float PRIX_NOURRITURE = 2.0; // 2.0€ le kg

public:
    Statistiques();
    void ajouterConsoEau(float qte);
    void ajouterConsoNourriture(float qte);
    void afficherRapport() const;
};

#endif
