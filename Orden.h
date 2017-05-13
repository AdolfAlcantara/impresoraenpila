#ifndef ORDEN_H
#define ORDEN_H
#include <iostream>

using namespace std;


class Orden
{
    public:
        Orden(string);
        virtual ~Orden();

        string oracion;
        Orden *sig;
};

#endif // ORDEN_H
