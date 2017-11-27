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
