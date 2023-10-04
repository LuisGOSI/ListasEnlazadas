#include "nodo.h"

int Nodo::getDato() const
{
    return dato;
}

void Nodo::setDato(int newDato)
{
    dato = newDato;
}

Nodo *Nodo::getSig() const
{
    return sig;
}

void Nodo::setSig(Nodo *newSig)
{
    sig = newSig;
}

Nodo::Nodo(int dato, Nodo *ini){
    this->dato=dato;
    this->sig=ini;
}
