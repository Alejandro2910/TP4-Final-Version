/**
    Tarea Programada 4
    En esta tarea programada se manejarán archivos csv, se les generaran datos estadísticos y literales dependiendo el tipo de dato.
    Clase: La clase lector es la clase encargada de la lectura, escritura y generacion de datos probabilísticos y literales del archivo leido.
    Autor: Alejandro Benavides-B61015
    Version: v3
    @param ifstream lect es el inpute file stream por el cual ingresan los datos.
    @param ofstream escr es el output file stream por el cual salen los datos.
    @param vector<string> nombresObj guarda los nombres de los parametros leídos del archivo.
    @param vector<string> tipoDatos guarda los tipos de dato de los parametros leídos del archivo.
    @param stringstream datosGenerados guarda los datos generados para luego ser escritos en el archivo de escritura.
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
