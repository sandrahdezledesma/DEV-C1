//Vamos a aprender a hacer arrays-VECTORES- PARTE 2
using namespace std;
      
#include<iostream>
int main(){
    int salir;
    int vector[5]; //un bucle que pida 5 numeros y los guarde/
    int cont;
    int suma;
    for(cont=0;cont<5;cont++){
                              cout<<"Dime un numero: ";
                              cin>>vector[cont];
}
    //Ahora sumamos
    cout<<"La SUMA VALE: ";
    for(cont=0;cont<5;cont++){
                              suma=suma+vector[cont];
    } 
    cout<<suma;
    cout<<"Mira mi vector relleno: ";
                for(cont=0;cont<5;cont++){
                cout<<"vector["<<cont<<"]="<<vector[cont];
                }
                
    std::cout<<"Toca cualquier tecla para salir";
    std::cin>>salir;
    return 0 ;
    
}


