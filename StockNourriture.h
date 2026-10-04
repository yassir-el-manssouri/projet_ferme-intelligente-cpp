#ifndef STOCKNOURRITURE_H
#define STOCKNOURRITURE_H

class StockNourriture {
private:
    float qteTotale;

public:
    StockNourriture(float qte);
    bool distribuer(float qte);
    void afficherStock() const;
};

#endif
