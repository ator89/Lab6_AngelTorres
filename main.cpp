#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Edificio.h"
#include "Carro.h"
#include "Chasis.h"
#include "Motor.h"
#include "Pintura.h"

//Menú de principal opciones
void menu();

int main(){
    Edificio* matrix = new Edificio();
    matrix->crearMatriz();
    matrix->initMatriz();
    matrix->printMatriz();
    matrix->freeMatriz();

    return 0;
}

//Menú de principal opciones
void menu(){
    
}