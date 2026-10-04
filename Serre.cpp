#include <iostream>
#include "Serre.h"
using namespace std;

Serre::Serre(float temp, float hum) : temperatureCible(temp), humiditeCible(hum) {}

void Serre::setTemperature(float temp) {
    temperatureCible = temp;
    cout << ">> Nouvelle consigne de temperature : " << temp << " C" << endl;
}

void Serre::afficherClimat() const {
    cout << "--- Climat Serre : " << temperatureCible << " C | Humidite " << humiditeCible << " % ---" << endl;
}
