#include "lista.h"

Lista::Lista(){
    ini=nullptr;
}

bool Lista::vacia(){
    if(ini==nullptr) return true;
    return false;
}

void Lista::agregaIni(int dato){
    Nodo *nvo=new Nodo(dato, ini);
    ini=nvo;

}

void Lista::agregaFin(int dato){
    Nodo *nvo = new Nodo(dato, nullptr);
    if(ini == nullptr){
        ini = nvo;
    } else {
        Nodo *temp = ini;
        while(temp->getSig() != nullptr){
            temp = temp->getSig();
        }
        temp->setSig(nvo);
    }
}

void Lista::agregaMed(int dato, int despues){
    if(vacia()){
        agregaIni(dato);
        return;
    }
    Nodo *temp=ini;
    while(temp->getDato()!=despues && temp->getSig()!=nullptr)
        temp=temp->getSig();
    if(temp->getSig()==nullptr){
        agregaFin(dato);
        return;
    }
    Nodo *nvo = new Nodo(dato, temp->getSig());
    temp->setSig(nvo);
}

void Lista::eliminaFin(){
    if(vacia())return;
    if(ini->getSig()==nullptr){
        delete ini;
        ini=nullptr;
        return;
    }
    Nodo *temp = ini;
    while(temp->getSig()->getSig()!=nullptr)
        temp=temp->getSig();
    delete temp->getSig();
    temp->setSig(nullptr);
}

void Lista::eliminaIni(){
    if(vacia()) return;
    Nodo *temp = ini;
    ini = ini->getSig();
    delete temp;
}

void Lista::imprimir(){
    if(vacia()){
        cout << "Lista vacia";
        return;
    }
    Nodo *temp=ini;
    while (temp != nullptr) {
        cout << temp->getDato()<<" , ";
        temp=temp->getSig();
    }
}
