//LECTURA HASTA AL FINAL- lee un fichero existente hasta el final
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string linea;
    int salir;
    ifstream fichero("mifichero.txt");//explicacion en el word. acabar siempre con fihcero.txt.// Lo de rojo: buscar la ruta del fichero, propiedades, ubicacion
    while(fichero.eof()==0){ //mientras el fichero sea cero, seguir, hasta que sea 1 que ya es el final
      getline(fichero,linea);      
      cout<<linea<<endl; //si lo dejamos aqui solo lee una linea, como repetir para varias lineas? --> while, lo ponemos arriba//endl para que separe las lineas
    }
    fichero.close(); //cerrar el fichero
    cin>>salir;
    return 0;
}
