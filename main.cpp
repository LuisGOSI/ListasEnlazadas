#include <QCoreApplication>
#include "lista.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Lista *li=new Lista();
    li->agregaMed(100, 10);
    for (int i = 10; i < 60; i+=10) {
        li->agregaFin(i);
    }
    li->agregaMed(200, 10);
    li->agregaMed(300, 30);
    li->agregaMed(400,70);
    li->imprimir();

    return a.exec();
}
