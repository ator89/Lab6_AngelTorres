#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <vector>
using std::vector;

#include "Edificio.h"
#include "Carro.h"
#include "Chasis.h"
#include "Motor.h"
#include "Pintura.h"

//Menú de principal opciones
void menu();
//Menú de línea de producción
void menuLinea();

int main(){
    vector<Carro> lista;
    //Edificio* matrix = new Edificio();
    //matrix->crearMatriz();
    //matrix->initMatriz();
    //matrix->printMatriz();
    //matrix->freeMatriz();

    Carro* carro = new Carro();
    carro->setNombreModelo("CC");
    carro->setNumeroSerie("1");
    carro->setChasis(new Chasis("4x4","Manual"));
    carro->setMotor(new Motor("Eléctrico","V8"));
    carro->setPintura(new Pintura("Negro","Matte"));

    //carro->getChasis()->setTipoRueda("sdf");
    //carro->getChasis()->setTransmision("manual");
    cout << "\n\n\tDetalles del Prototipo\n\n";
    cout << "Modelo y Serie: "<< carro->getNombreModelo() << carro->getNumeroSerie() << endl;
    cout << "Chasis -> " << "Tipo Rueda: " << carro->getChasis()->getTipoRueda()<<endl;
    cout << "\tTipo de Transmisión: " << carro->getChasis()->getTransmision()<<endl;
    cout << "\nMotor -> " << "Tipo Motor: " << carro->getMotor()->getTipoMotor() << endl;
    cout << "\tConfiguración: " << carro->getMotor()->getConfiguracion() << endl;
    cout << "\nPintura -> " << "Color: " << carro->getPintura()->getColor() << endl;
    cout << "\tAcabado: " << carro->getPintura()->getAcabado() << endl;
    delete carro;
    return 0;
}

//Menú de principal opciones
void menu(){
    cout << "\n\tMENU\n\n"
        << "1 - Agregar línea de producción\n"
        << "2 - Ver matriz de líneas de producción\n"
        << "3 - Ver líneas de producción por detalles con cada carro\n"
        << "4 - Ver listado de carros producidos\n"
        << "5 - Avanzar ciclo de producción\n"
        << "Seleccione una opción: ";
}

//Menú de línea de producción
void menuLinea(){
    cout << "\n\tLíneas de Producción\n\n"
        << "1 - Crear Prototipo\n"
        << "2 - Fabricar ";
}