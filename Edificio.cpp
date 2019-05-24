#include "Edificio.h"
#include <iostream>
using std::cout;
using std::endl;

Edificio::Edificio(){
    matrix = 0;
}
//Destructor
Edificio::~Edificio(){
    freeMatriz();
}

char** Edificio::crearMatriz(){
    matrix = new char*[5];
    for(int i = 0; i < 5; i++){
        matrix[i] = new char[4];
    }
    return matrix;
}

void Edificio::initMatriz(){
    for(int i = 0; i< 5; i++){
        for(int j= 0; j <4;j++){
            matrix[i][j] = '.';
        }
    }
}
void Edificio::printMatriz(){
    for(int i = 0; i< 5; i++){
        for(int j= 0; j <4;j++){
            cout << '[' << matrix[i][j] << ']';
        }
        cout << endl;
    } 
}
void Edificio::freeMatriz(){
    for(int i = 0; i < 4; i++){
        delete matrix[i];
        matrix[i] = nullptr;
    }
    delete[] matrix;
}