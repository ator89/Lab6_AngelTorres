//Header de clase compuesta Carro
#ifndef CARRO_H
#define CARRO_H

#include <string>
using std::string;
#include "Chasis.h"
#include "Motor.h"
#include "Pintura.h"

class Carro{
    private:
        string nombre_modelo;
        string numero_serie;
        Chasis* chasis;
        Motor* motor;
        Pintura* pintura;
    public:
        Carro();
        Carro(string,string,Chasis*,Motor*,Pintura*);
        ~Carro();

        //Setters
        void setNombreModelo(string);
        void setNumeroSerie(string);
        void setChasis(Chasis*);
        void setMotor(Motor*);
        void setPintura(Pintura*);

        //Getters
        string getNombreModelo();
        string getNumeroSerie();
        Chasis* getChasis();
        Motor* getMotor();
        Pintura* getPintura();

};

#endif