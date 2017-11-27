#include <iostream>
#include "Lector.h"
#include "ListaObjetos.h"
#include <list>

using namespace std;

int main()
{
    Lector l;
    ListaObjetos lo;
    list<Objeto>::iterator iter;
    string nombreArch="";
    int resp=1;
    cout<<"De el nombre del archivo a leer con la terminacion .txt: ";
    cin>>nombreArch;
    l.abraParaLeer(nombreArch);
    l.leaNombres();
    l.leaTipo();
    l.leaObjetos(lo.listaDeObjetos);
    l.cierreLeido();

    while(resp!=0){
        cout<<"\n";
        cout<<"Que desea hacer?\n1. Mostrar Objetos\n2. Generar Datos\n3. Escribir archivo\n0. Terminar "<<endl;
        cin>>resp;
    if(resp!=0){
        switch(resp){
        case 1:
            cout<<lo.muestreObjetos()<<endl;
            break;
        case 2:
            l.genereDatos(lo);
            break;
        case 3:
            string dir="";
            cout<<"Nombre el archivo de escrtura terminado con la terminacion .txt: "<<endl;
            cin>>dir;
            l.abraParaEscribir(dir);
            l.escriba();
            l.cierreEscrito();
        }
    }
    }
    return 0;
}
