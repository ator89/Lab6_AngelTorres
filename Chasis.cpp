#include "Chasis.h"

//Constructores
Chasis::Chasis(){
    tipo_rueda = "";
    transmision = "";
}
Chasis::Chasis(string tipor,string trans){
    tipo_rueda = tipor;
    transmision = trans;
}
//Destructor
Chasis::~Chasis(){}

//Setters
void Chasis::setTipoRueda(string tipor){
    tipo_rueda = tipor;
}
void Chasis::setTransmision(string trans){
    transmision = trans;
}

//Getters
string Chasis::getTipoRueda(){
    return tipo_rueda;
}

string Chasis::getTransmision(){
    return transmision;
}