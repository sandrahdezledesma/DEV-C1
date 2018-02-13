//Manejo de punteros COMO LO TIENE ANTONIO
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int medida(char aux[]){ //funcion que devuelve un entero
    int l=0; //contar el unmero de letras de una palabra
    while(aux[l]!='\0'){ //while para que vaya contando hasta que llegue al final de la cadena
          l++; 
    }
    
    return l;
} 

int main(){
     char *lista[5];
     int salir;
     char aux[15];
     int cont;
     int l;
     for(cont=0;cont<5;cont++){
         printf("\nNombre amigo %i: ",cont);
         scanf("%s",aux);  
         l=medida(aux);
         printf("%i\n",l);
         lista[cont]=(char *) malloc(l*sizeof(char)); //malloc, asigna solo el espacio que necesita
         strcpy(lista[cont],aux);
     }
     for(cont=0;cont<5;cont++){
        printf("\n%s",lista[cont]);                       
                               
     }
     printf("\nToca cualquier tecla: ");
     scanf("%i",&salir);
}
