#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Edificio.h"

int main(){
    Edificio* matrix = new Edificio();
    matrix->crearMatriz();
    matrix->initMatriz();
    matrix->printMatriz();
    matrix->freeMatriz();

    return 0;
}

