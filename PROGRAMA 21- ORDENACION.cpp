//MÉTODO DE ORDENACION DE LA BURBUJA (ALGORITMO)
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
     int veces;
     char*pauxiliar; //P AUXILIAR ES UNA VARIABLE QUE PERMITE GUARDAR NUMEROS HEXADECIMALES QUE PAUNTAN A UNA LETRA
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
     //ORDENAMIENTO
     for(nveces=1:nveces<5;nveces++){
                                     for(cont=0;cont<5;cont++){
                                                               if(*lista[0]>*lista[1]) //if (letra1>letra2)
                                                               pauxiliar=lista[cont];
                                                               lista[cont]=lista[cont+1];
                                                               lista[cont+1]=pauxiliar;
                                     }
                               
                               }
     }
     //DESPUES DEL ORDENAMIENTO
     printf("\nlista ordenada: ");
     for(cont=0;cont<5;cont++){
     }
     printf("\nToca cualquier tecla: ");
     scanf("%i",&salir);
}
