#ifndef SERRE_H
#define SERRE_H

class Serre {
private:
    float temperatureCible;
    float humiditeCible;

public:
    Serre(float temp, float hum);
    void setTemperature(float temp);
    void afficherClimat() const;
};

#endif
