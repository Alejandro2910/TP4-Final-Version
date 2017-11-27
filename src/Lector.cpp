#include "Lector.h"

/**
    Este método se encarga de abrir el archivo de lectura asociado a un nombre proporcionado por el usuario
    @param string nomarch es el nombre del archivo
**/
void Lector::abraParaLeer(string nomArch)
{
    lect.open(nomArch);
}

/**
    Este método se encarga de cerrar el archivo de lectura
**/
void Lector::cierreLeido()
{
    lect.close();
}

/**
    Este metodo se encarga de leer la primera linea del archivo, que contiene los nombres de los parametros a leer,
    y los guarda en un vector para luego pasarles ese parametro a cada objeto.
    @param string nombres se encarga de guardar los nombres.
    @param istringstream x toma el string de datos y lo hace un input string para poder usar el método getline sobre
    el de nuevo.
    @param string separador guarda los datos separados por coma para meterlos en el vector de nombres.
**/
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

/**
    Este metodo se encarga de leer la segund linea del archivo, que contiene los tipos de datos que son los parametros.
    Siendo 1 un dato string y 2 un dato float
    @param string tipos se encarga de guardar los tipos.
    @param istringstream y toma el string de datos y lo hace un input string para poder usar el método getline sobre
    el de nuevo.
    @param string intermediario guarda los datos separados por coma para meterlos en el vector de tipos.
**/
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

/**
    Este metodo se encarga de leer de la tercera linea en adelante, que contiene los datos de los objetos y los almacena en
    objetos para luego guardarlos en una lista de objetos.
    @param string tipos se encarga de guardar los tipos.
    @param istringstream y toma el string de datos y lo hace un input string para poder usar el método getline sobre
    el de nuevo.
    @param string intermediario guarda los datos separados por coma para meterlos en el vector de tipos.
**/
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
