//FICHEROS
#include<iostream>
#include<fstream>//para leer ficheros

using namespace std;

int main(){ 
//Abrimos un fichero
  int salir;
 ofstream fichero("mifichero.txt"); 
 fichero<<"En un lugar de la mancha"<<endl;
 fichero<<"de cuyo nombre no quiero...";   
 fichero.close();
 cout<<"Ya esta. Fichero cerrado";   
 cin>>salir;
 return 0;   
}
