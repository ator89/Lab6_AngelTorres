#include "Pintura.h"

//Constructores
Pintura::Pintura(){
    color = "";
    acabado = "";
}

Pintura::Pintura(string c, string a){
    color = c;
    acabado = a;
}

//Destructor
Pintura::~Pintura(){}

//Setters
void Pintura::setColor(string c){
    color = c;
}

void Pintura::setAcabado(string a){
    acabado = a;
}

//Getters
string Pintura::getColor(){
    return color;
}

string Pintura::getAcabado(){
    return acabado;
}