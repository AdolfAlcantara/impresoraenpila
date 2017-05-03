#include "impresora.h"

impresora::impresora()
{
    head =0;
}

bool impresora::ordenes()
{
    return head==0;
}

void impresora::solicitar(Orden*n)
{
    if(ordenes()){
        head=n;
    }else{
        Orden *temp = head;
        while(temp->sig!=0){
            temp = temp->sig;
        }
        temp->sig=n;
    }
}

string impresora::imprimir()
{
    if(ordenes()){
        return "la lista esta vacia\n";
    }else{
        string x =  head->oracion;
        head = head->sig;
        return x;
    }
}

Orden* impresora::getPrimera()
{
    if(!ordenes()){
        return head;
    }else{
        return 0;
    }
}

impresora::~impresora()
{
    //dtor
}
