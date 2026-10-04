#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include <iostream>

class Animal {
private:
    std::string nom;
    std::string etatSante;

public:
    Animal(std::string n, std::string etat);
    void afficherEtat() const;
};

#endif
