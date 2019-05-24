//Header de clase simple Chasis
#ifndef CHASIS_H
#define CHASIS_H

#include <string>
using std::string;

class Chasis{
    private:
        string tipo_rueda;
        string transmision;
    public:
        Chasis();
        Chasis(string,string);
        ~Chasis();

        //Setters
        void setTipoRueda(string);
        void setTransmision(string);

        //Getters
        string getTipoRueda();
        string getTransmision();
};

#endif