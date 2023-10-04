#ifndef NODO_H
#define NODO_H
#include <iostream>
using namespace std;


class Nodo
{
private:
    int dato;
    Nodo *sig;  //Esta apuntando a otro nodo (Clases autoreferenciadas)
public:
    Nodo(int dato, Nodo *ini);

    int getDato() const;
    void setDato(int newDato);
    Nodo *getSig() const;
    void setSig(Nodo *newSig);
};

#endif // NODO_H
