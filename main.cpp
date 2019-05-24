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
    int opcionMenu = -1;
    bool menuActivo = true;
    Edificio* matrix = new Edificio();
    matrix->crearMatriz();
    matrix->initMatriz();

    Carro* carro = new Carro();



    while (menuActivo)
    {
        do{
            cin.clear();
            menu();
            cin >> opcionMenu;
            switch(opcionMenu){
                case 1://Agregar Línea de producción
                    {
                    int opcionMenuLinea = -1;
                    bool menuLineaAct = true;
                    while (menuLineaAct){
                            cin.clear();
                            do{
                                menuLinea();
                                cin >> opcionMenuLinea;
                                switch(opcionMenuLinea){
                                    case 1://Crear prototipo
                                    {

                                        cout << "";
                                        carro->setNombreModelo("CC");
                                        carro->setNumeroSerie("1");
                                        carro->setChasis(new Chasis("4x4","Manual"));
                                        carro->setMotor(new Motor("Eléctrico","V8"));
                                        carro->setPintura(new Pintura("Negro","Matte"));
                                    }
                                    break;
                                    case 2:
                                    break;
                                    case 0:
                                    break;
                                    default:
                                        cout << "¡ERROR! Verifique su opción\n" <<endl;
                                    break;
                                }

                            }while(opcionMenuLinea != 0);//end do while menú línea
                            menuLineaAct = false;
                        }//End while menú línea activo
                    }
                break;
                case 2://Imprimir matriz
                    matrix->printMatriz();
                break;
                case 3://Ver líneas de producción 
                {
                    cout << "\n\n\tDetalles del Prototipo\n\n";
                    cout << "Modelo y Serie: "<< carro->getNombreModelo() << carro->getNumeroSerie() << endl;
                    cout << "Chasis -> " << "Tipo Rueda: " << carro->getChasis()->getTipoRueda()<<endl;
                    cout << "\tTipo de Transmisión: " << carro->getChasis()->getTransmision()<<endl;
                    cout << "\nMotor -> " << "Tipo Motor: " << carro->getMotor()->getTipoMotor() << endl;
                    cout << "\tConfiguración: " << carro->getMotor()->getConfiguracion() << endl;
                    cout << "\nPintura -> " << "Color: " << carro->getPintura()->getColor() << endl;
                    cout << "\tAcabado: " << carro->getPintura()->getAcabado() << endl;
                }
                break;
                case 4://Ver lista de carros producidos
                break;
                case 5://Avanzar
                break;
                case 0:
                    cout << "Saliendo..." << endl;
                break;
                default:
                    cout << "¡ERROR! Verifique su opción\n" <<endl;
                break;
            }

        }while(opcionMenu != 0);//end do while menú principal
        menuActivo = false;
    }//End while menú activo

    delete carro;
    matrix->freeMatriz();
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
        << "0 - Salir\n"
        << "Seleccione una opción: ";
}

//Menú de línea de producción
void menuLinea(){
    cout << "\n\tLíneas de Producción\n\n"
        << "1 - Crear Prototipo\n"
        << "2 - Fabricar\n"
        << "0 - Salir\n"
        << "Seleccione una opción: ";
}