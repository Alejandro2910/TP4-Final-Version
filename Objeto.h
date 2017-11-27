/**
    Tarea Programada 4
    En esta tarea programada se manejarán archivos csv, se les generaran datos estadísticos
    y literales dependiendo el tipo de dato.
    Clase:La clase objeto contiene lo necesario para guardar los datos de cualquier objeto leido.
    Asi como un método para mostrarlos.
    Autor: Alejandro Benavides-B61015
    Version: v3
    @param vector<string> nombreDeDatos es el vector que contiene el nombre de los parametros de cada objeto.
    @param vector<string> datos contiene los datos de cada objeto.
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
