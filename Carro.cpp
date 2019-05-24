#include "Carro.h"

//Constructores
Carro::Carro(){
    nombre_modelo = "";
    numero_serie = "";
    chasis = 0;
    motor = 0;
    pintura = 0;
}

Carro::Carro(string nombre,string serie,Chasis* chas,Motor* mot,Pintura* pin){
    nombre_modelo = nombre;
    numero_serie = serie;
    chasis = chas;
    motor = mot;
    pintura = pin;
}
//Destructor
Carro::~Carro(){
    if(motor)
        delete motor;
    if(chasis)
        delete chasis;
    if(pintura)
        delete pintura;
}

//Setters
void Carro::setNombreModelo(string nombre){
    nombre_modelo = nombre;
}

void Carro::setNumeroSerie(string serie){
    numero_serie = serie;
}

void Carro::setChasis(Chasis* chas){
    chasis = chas;
}

void Carro::setMotor(Motor* mot){
    motor = mot;
}

void Carro::setPintura(Pintura* pin){
    pintura = pin;
}

//Getters
string Carro::getNombreModelo(){
    return nombre_modelo;
}

string Carro::getNumeroSerie(){
    return numero_serie;
}

Chasis* Carro::getChasis(){
    return chasis;
}

Motor* Carro::getMotor(){
    return motor;
}

Pintura* Carro::getPintura(){
    return pintura;
}