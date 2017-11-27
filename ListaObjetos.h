/**
    Tarea Programada 4
    En esta tarea programada se manejar�n archivos csv, se les generaran datos estad�sticos
    y literales dependiendo el tipo de dato.
    Clase: Esta clase es la que contiene una lista con todos los objetos asociados al archivo
    y adem�s se encarga de obtener los datos literales y estad�sticos de todos los objetos.
    Autor: Alejandro Benavides-B61015
    Version: v3
    @param list<Objeto> listaDeObjetos es una lista que guarda todos los objetos le�dos del archivo.

**/
#ifndef LISTAOBJETOS_H
#define LISTAOBJETOS_H
#include <list>
#include "Objeto.h"
#include <sstream>
#include <cstdlib>
#include <cmath>

using namespace std;

class ListaObjetos
{
    public:
        list<Objeto> listaDeObjetos;
        ListaObjetos();
        virtual ~ListaObjetos();
        string muestreObjetos();
        string getDatosNumericos(int);
        string getDatosLiterales(int);

    protected:

    private:
};

#endif // LISTAOBJETOS_H
