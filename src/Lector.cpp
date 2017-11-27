#include "Lector.h"

void Lector::abraParaLeer(string nomArch)
{
    lect.open(nomArch);
}

void Lector::cierreLeido()
{
    lect.close();
}

void Lector::leaNombres(){
    if(lect){
        string nombres="";
        getline(lect, nombres);
        istringstream x(nombres);
        string separador="";
        while(getline(x, separador, ',')){
            nombresObj.push_back(separador);
        }
    }else{
        cout<<"El archivo de lectura esta cerrado."<<endl;
    }
}

void Lector::leaTipo(){
    if(lect){
        string tipos="";
        getline(lect, tipos);
        istringstream y(tipos);
        string intermediario="";
        while(getline(y, intermediario, ',')){
            tipoDatos.push_back(intermediario);
        }
    }else{
        cout<<"El archivo de lectura esta cerrado."<<endl;
    }
}

void Lector::leaObjetos(list<Objeto> &lisObj){
    if(lect){
        Objeto o;
        string datos="";
        while(getline(lect, datos)){
            istringstream z(datos);
            string sep="";
            while(getline(z, sep, ',')){
                o.datos.push_back(sep);
            }
            o.nombreDeDatos=nombresObj;
            lisObj.push_back(o);
            (o.datos).clear();
        }
    }else{
        cout<<"El archivo de lectura esta cerrado."<<endl;
    }
}

void Lector::escriba(){
    if(escr){
        escr<<datosGenerados.str()<<endl;
    }else{
        cout<<"El archivo de escritura esta cerrada."<<endl;
    }
}

void Lector::abraParaEscribir(string dir){
    escr.open(dir);
}

void Lector::cierreEscrito(){
    escr.close();
}

void Lector::genereDatos(ListaObjetos &l){
    vector<string>::iterator it;
    int contador=0;
    for(it=tipoDatos.begin();it!=tipoDatos.end();++it){
        if(atoi((*it).c_str())==1){
            datosGenerados<<l.getDatosLiterales(contador)<<endl;
        }else if(atoi((*it).c_str())==2){
            datosGenerados<<l.getDatosNumericos(contador)<<endl;
        }
        contador++;
    }
    cout<<datosGenerados.str()<<endl;
}
