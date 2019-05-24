//Header de clase simple Motor
#ifndef MOTOR_H
#define MOTOR_H

#include <string>
using std::string;

class Motor{
    private:
        string tipo_motor;
        string configuracion;
    public:
        Motor();
        Motor(string,string);
        ~Motor();

        //Setters
        void setTipoMotor(string);
        void setConfiguracion(string);

        //Getters
        string getTipoMotor();
        string getConfiguracion();
};

#endif