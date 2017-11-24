/*Este programa sirve para leer por teclado 10 numeros enteros y devolver
el mayor*/
#include<iostream>

int main(){
//Definicion de variables
int cont;
int numero;
int mayor;
int salir;
//Bucle tipo for cont=cont+1 es lo mismo que cont++
//for(cont=10;cont>=0:cont--)
mayor=numero;
    for(cont=1;cont<=10;cont++){
        std::cout<< "Dime un numero: ";
        std::cin>>numero;
        if(numero>mayor){
          mayor=numero;
          }
    }   
    std::cout<< "El mayor es: " <<mayor;
    std::cout<< "Toca cualquier tecla";
    std::cin>>salir;
    return 0;
    
}
    
