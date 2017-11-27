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
