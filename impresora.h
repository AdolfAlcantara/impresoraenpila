#ifndef IMPRESORA_H
#define IMPRESORA_H
#include "Orden.h"
#include <iostream>

using namespace std;


class impresora
{
    public:
        impresora();
        void solicitar(Orden*);                       //aniade una nueva orden a la lista
        string imprimir();                      //imprime la orden que este primera
        bool ordenes();                     //verifica si hay ordenes pendientes
        Orden* getPrimera();
        virtual ~impresora();

        Orden *head;
};

#endif // IMPRESORA_H
