//Header de clase simple Pintura
#ifndef PINTURA_H
#define PINTURA_H

#include <string>
using std::string;

class Pintura{
    private:
        string color;
        string acabado;
    public:
        Pintura();
        Pintura(string,string);
        ~Pintura();

        //Setters
        void setColor(string);
        void setAcabado(string);

        //Getters
        string getColor();
        string getAcabado();
};

#endif