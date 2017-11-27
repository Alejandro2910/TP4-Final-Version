#include "ListaObjetos.h"

ListaObjetos::ListaObjetos()
{
    //ctor
}

ListaObjetos::~ListaObjetos()
{
    //dtor
}

string ListaObjetos::muestreObjetos(){
    stringstream objetos;
    list<Objeto>::iterator iter;
    for(iter=listaDeObjetos.begin();iter!=listaDeObjetos.end();++iter){
        objetos<<(*iter).muestreDatosObjeto();
    }
    return objetos.str();
}

string ListaObjetos::getDatosNumericos(int par){
    stringstream datos;
    list<Objeto>::iterator iter;
    iter=listaDeObjetos.begin();
    string nomTmp=(*iter).nombreDeDatos[par];
    string objMay="";
    string objMen="";
    float mayor=atof(((*iter).datos[par]).c_str());
    float menor=atof(((*iter).datos[par]).c_str());
    float suma=0.0;
    float contador;
    float valorEsperado=0.0;
    float proba=0.17;
    for(iter=listaDeObjetos.begin();iter!=listaDeObjetos.end();++iter){
        if(mayor<atof(((*iter).datos[par]).c_str())){
            mayor=atof(((*iter).datos[par]).c_str());
            objMay=(*iter).getNom();
        }
        if(menor>atof(((*iter).datos[par]).c_str())){
            menor=atof(((*iter).datos[par]).c_str());
            objMen=(*iter).getNom();
        }
        valorEsperado+=atof(((*iter).datos[par]).c_str())*proba;
        suma+=atof(((*iter).datos[par]).c_str());
        contador++;
    }
    datos<<"El mayor valor asociado a "<<nomTmp<<" es "<<mayor<<" de "<<objMay<<" y el menor es "<<menor<<" de "<<objMen<<endl;
    datos<<"El promedio de "<<nomTmp<<" es "<<suma/contador<<endl;
    datos<<"El valor esperado de "<<nomTmp<<" es "<<valorEsperado<<endl;

    return datos.str();
}

string ListaObjetos::getDatosLiterales(int param){
    stringstream datos;
    list<Objeto>::iterator iter;
    list<Objeto>::iterator iter2;
    iter=listaDeObjetos.begin();
    string nomTmp=(*iter).nombreDeDatos[param];
    vector<int> cant;
    vector<int>::iterator iter3;
    int contador;

    for(iter=listaDeObjetos.begin();iter!=listaDeObjetos.end();++iter){
            contador=0;
        for(iter2=listaDeObjetos.begin();iter2!=listaDeObjetos.end();++iter2){
            if(((*iter).datos[param])==((*iter2).datos[param])){
                contador++;
            }
        }
        cant.push_back(contador);
    }
    datos<<"Los datos asociados a "<<nomTmp<<" son:\n"<<endl;
    for(iter=listaDeObjetos.begin(), iter3=cant.begin();iter!=listaDeObjetos.end() && iter3!=cant.end();++iter, ++iter3){
        datos<<((*iter).datos[param])<<": "<<(*iter3)<<endl;
    }
    return datos.str();
}
