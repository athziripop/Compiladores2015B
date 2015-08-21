#include <iostream>

using namespace std;

int main()
{
    int estado=1, i=0;
    string cadena;
    cout<<"Ingrese cadena.."<<endl;
    cin>>cadena;
    for (i = 0 ; i <= cadena.length()-1 ; i++){
    switch (estado){
    case 1:
        if(isdigit(cadena.at(i))){
            estado=2;
        }
        else if (cadena.at(i)=='E'|| cadena.at(i)=='+'|| cadena.at(i)=='-'|| cadena.at(i)=='.'){
            estado=8;
        }
        break;
    case 2:
        if(isdigit(cadena.at(i)))                      estado = 2;
        else if(cadena.at(i)=='E')                     estado = 5;
        else if(cadena.at(i)=='+'|| cadena.at(i)=='-') estado = 8;
        else if(cadena.at(i)=='.')                     estado = 3;
        break;
    case 3:
        if(isdigit(cadena.at(i)))                      estado = 4;
        else if (cadena.at(i)=='E'|| cadena.at(i)=='+'|| cadena.at(i)=='-'|| cadena.at(i)=='.'){
            estado=8;
        }
        break;
    case 4:
        if(isdigit(cadena.at(i)))                      estado = 4;
        else if(cadena.at(i)=='E')                     estado = 5;
        else if (cadena.at(i)=='+'|| cadena.at(i)=='-'|| cadena.at(i)=='.'){
            estado=8;
        }
        break;
    case 5:
        if(isdigit(cadena.at(i)))                      estado = 7;
        else if(cadena.at(i)=='E'|| cadena.at(i)=='.') estado = 8;
        else if(cadena.at(i)=='+'|| cadena.at(i)=='-') estado = 6;
        break;
    case 6:
         if(isdigit(cadena.at(i)))                     estado = 7;
        else if (cadena.at(i)=='E'|| cadena.at(i)=='+'|| cadena.at(i)=='-'|| cadena.at(i)=='.'){
            estado=8;
        }
        break;
    case 7:
        if(isdigit(cadena.at(i)))                     estado = 7;
        else if (cadena.at(i)=='E'|| cadena.at(i)=='+'|| cadena.at(i)=='-'|| cadena.at(i)=='.'){
            estado=8;
        }
        break;
    case 8:
         estado=8;
        break;
}
    }
    if(estado==4||estado==7){
        cout<<"CADENA VALIDA"<<endl;
    }
    if(estado==8) cout<<"CADENA INVALIDA"<<endl;
    return 0;
}
