/**
    Tarea Programada 4
    En esta tarea programada se manejarán archivos csv, se les generaran datos estadísticos y literales dependiendo el tipo de dato.
    Clase: La clase lector es la clase encargada de la lectura, escritura y generacion de datos probabilísticos y literales del archivo leido.
    Autor: Alejandro Benavides-B61015
    Version: v3
**/
#ifndef LECTOR_H
#define LECTOR_Hd
#include <istream>
#include <sstream>
#include <fstream>
#include <iostream>
#include "Objeto.h"
#include "ListaObjetos.h"
#include <vector>
#include <list>

using namespace std;

class Lector
{
    public:
        ifstream lect;
        ofstream escr;
        vector<string> nombresObj;
        vector<string> tipoDatos;
        stringstream datosGenerados;

        void leaObjetos(list<Objeto>&);
        void leaNombres();
        void leaTipo();
        void abraParaLeer(string);
        void cierreLeido();
        void escriba();
        void abraParaEscribir(string);
        void cierreEscrito();
        void genereDatos(ListaObjetos&);


    protected:

    private:
};

#endif // LECTOR_H
