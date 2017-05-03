#include <iostream>
#include "impresora.h"

using namespace std;

impresora* impresora1 = new impresora();

int main()
{
    int opcion;
    do{
        cout<<"1. Solicitar Orden"<<endl;
        cout<<"2. Imprimir Orden"<<endl;
        cout<<"3. Obtener primera orden"<<endl;
        cout<<"0. Salir"<<endl;
        cout<<"\nEscriba su opcion: "<<endl;
        cin>>opcion;

        switch(opcion){
            case 1:
                {
                    string oracion;
                    cout<<"Escriba lo que desea imprimir: \n"<<endl;
                    cin>>oracion;
                    impresora1->solicitar(new Orden(oracion));
                    break;
                }
            case 2:
                    cout<<impresora1->imprimir()<<endl;
                    break;
            case 3:
                {
                    Orden *temp = impresora1->getPrimera();
                    if(temp==0){
                        cout<<"la lista esta vacia\n";
                    }else{
                        cout<<temp->oracion<<endl;
                    }
                    break;
                }
        }
        cout<<"-------------------------------------------------------------------"<<endl;

    }while(opcion!=0);
}
