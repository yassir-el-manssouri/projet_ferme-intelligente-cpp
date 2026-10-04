#ifndef RESERVOIREAU_H
#define RESERVOIREAU_H

class ReservoirEau {
private:
    float capaciteMax;
    float niveauActuel;

public:
    ReservoirEau(float capacite); // Constructeur
    
    bool arroser(float quantite);
    
    // SURCHARGE (Overloading) : Deux manières de remplir
    void remplir();               // Remplit tout
    void remplir(float quantite); // Ajoute une quantité précise
    
    void afficherEtat() const;
};

#endif
