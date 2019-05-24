#ifndef EDIFICIO_H
#define EDIFICIO_H

class Edificio{
    private:
        char** matrix;
    public:
        Edificio();
        ~Edificio();

        char** crearMatriz();
        void initMatriz();
        void printMatriz();
        void freeMatriz();
};

#endif