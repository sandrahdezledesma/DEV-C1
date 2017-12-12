#include<iostream>
#include<fstream>

using namespace std;
int main(){
    string mensaje;
    int salir;
    fstream fichero("mifichero.txt");
    fichero>>mensaje; //pasa el contenido del fichero a la cadena mensaje
    cout<<mensaje<<endl;
    fichero.close(); //NO ES OBLIGATORIO; cerrar el fichero
    cin>>salir;
    return 0;  
}
