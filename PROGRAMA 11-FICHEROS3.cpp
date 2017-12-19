//FICHERO3 LEER LINEAS
#include<iostream>
#include<fstream>

using namespace std;

int main(){ 
    ifstream fichero("mifichero.txt");
    string mensaje;
    int salir;
    cout<<"El texto dice: ";
    while(fichero.eof()!=1){
    for(int nlinea=1;nlinea<=4;nlinea++){
            getline(fichero,mensaje);//para escribir una linea, leo el fichero, abre una linea y la mete en el mensaje.
            if(fichero.eof()!=1){
                                 cout<<mensaje;
                                 cout<<endl;
}
            }
}
    cin>>salir;
    return 0;
}
