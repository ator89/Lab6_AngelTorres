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
    

    

    int cantidadCarros = 0;
 
    vector<Carro*> lineaCarros;

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
                                        if(cantidadCarros>5){
                                            cout << "Ya no hay espacio para líneas de carros\n\n";
                                            
                                        }else{
                                        Carro* carro = new Carro();
                                        string nombreModelo, numeroSerie, tipoRuedas, transmision, tipoMotor, configuracion,color, acabado;
                                        cout << "Ingrese el nombre del modelo";
                                        cin >> nombreModelo;
                                        cout << "Número de serie";
                                        cin >> numeroSerie;
                                        cout << "Tipo de Ruedas";
                                        cin >> tipoRuedas;
                                        cout << "Tipo de transmisión";
                                        cin >> transmision;
                                        cout << "Tipo de Motor (eléctrico-gas)";
                                        cin >> tipoMotor;
                                        cout << "Configuración del Motor (V6, V8,..)";
                                        cin >> configuracion;
                                        cout << "Color del carro";
                                        cin >> color;
                                        cout << "Acabado de Pintura";
                                        cin >> acabado;

                                        carro->setNombreModelo(nombreModelo);
                                        carro->setNumeroSerie(numeroSerie);
                                        carro->setChasis(new Chasis(tipoRuedas,transmision));
                                        carro->setMotor(new Motor(tipoMotor,configuracion));
                                        carro->setPintura(new Pintura(color,acabado));

                                        lineaCarros.push_back(carro);
                                        matrix->initMatriz(cantidadCarros);
                                        cantidadCarros++;
                                        }
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
                    for(int i= 0; i < lineaCarros.size(); i++){
                        cout << "\n\n\tDetalles del Prototipo\n\n";
                        cout << "Modelo y Serie: "<< lineaCarros[i]->getNombreModelo() << lineaCarros[i]->getNumeroSerie() << endl;
                        cout << "Chasis -> " << "Tipo Rueda: " << lineaCarros[i]->getChasis()->getTipoRueda()<<endl;
                        cout << "\tTipo de Transmisión: " << lineaCarros[i]->getChasis()->getTransmision()<<endl;
                        cout << "\nMotor -> " << "Tipo Motor: " << lineaCarros[i]->getMotor()->getTipoMotor() << endl;
                        cout << "\tConfiguración: " << lineaCarros[i]->getMotor()->getConfiguracion() << endl;
                        cout << "\nPintura -> " << "Color: " << lineaCarros[i]->getPintura()->getColor() << endl;
                        cout << "\tAcabado: " << lineaCarros[i]->getPintura()->getAcabado() << endl;
                    }
                    
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

    for(int i =0; i < lineaCarros.size(); i++){
        //lineaCarros.back[i];
        delete lineaCarros[i];
    }
    
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
        << "0 - Salir\n"
        << "Seleccione una opción: ";
}