#include "Objeto.h"

Objeto::Objeto()
{
    //ctor
}

Objeto::~Objeto()
{
    //dtor
}

string Objeto::muestreDatosObjeto(){
    stringstream datosObjeto;
    vector<string>::iterator it;
    vector<string>::iterator iter;
    datosObjeto<<"Pais:\n"<<endl;
    for(it=nombreDeDatos.begin(), iter=datos.begin();it!=nombreDeDatos.end() && iter!=datos.end();++it,++iter){
        datosObjeto<<*it<<": "<<*iter<<endl;
    }

    datosObjeto<<endl;
    return datosObjeto.str();
}

string Objeto::getNom(){
    return datos[0];
}
