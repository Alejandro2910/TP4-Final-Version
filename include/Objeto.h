/**
    Tarea Programada 4
    En esta tarea programada se manejar�n archivos csv, se les generaran datos estad�sticos
    y literales dependiendo el tipo de dato.
    Clase:La clase objeto contiene lo necesario para guardar los datos de cualquier objeto leido.
    Asi como un m�todo para mostrarlos.
    Autor: Alejandro Benavides-B61015
    Version: v3
**/
#ifndef OBJETO_H
#define OBJETO_H
#include <vector>
#include <string>
#include <sstream>

using namespace std;

class Objeto
{
    public:
        Objeto();
        virtual ~Objeto();
        string muestreDatosObjeto();
        vector<string> nombreDeDatos;
        vector<string> datos;
        string getNom();

    protected:

    private:
};

#endif // OBJETO_H
