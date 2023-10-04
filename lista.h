#ifndef LISTA_H
#define LISTA_H
#include "nodo.h"

class Lista{
private:
    Nodo *ini;

public:
    Lista();
    void agregaIni(int dato);
    bool vacia();
    void imprimir();
    void agregaFin(int dato);
    void eliminaFin();
    void eliminaIni();
    void agregaMed(int dato, int despues);

};

#endif // LISTA_H
