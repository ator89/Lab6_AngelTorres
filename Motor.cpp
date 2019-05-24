#include "Motor.h"

//Constructores
Motor::Motor(){
    tipo_motor = "";
    configuracion = "";
}

Motor::Motor(string tipom, string config){
    tipo_motor = tipom;
    configuracion = config;
}

Motor::~Motor(){}

//Setters
void Motor::setTipoMotor(string tipom){
    tipo_motor = tipom;
}

void Motor::setConfiguracion(string config){
    configuracion = config;
}

//Getters
string Motor::getTipoMotor(){
    return tipo_motor;
}

string Motor::getConfiguracion(){
    return configuracion;
}