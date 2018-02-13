//MANEJO DE PUNTEROS
#include<stdio.h>
#include<stdlib.h> //Libreria en la que esa malloc

int main(){ //delcarar primero lista, que va a ser u vector de tres posiciones por ejemplo.
    char *lista[3]; //esto e sun vector para guardar 3 letras, aunque con * queremos guardar 3 punteros a letras
    int salir;
    lista[0]=(char *) malloc(8*sizeof(char)); //busca el tamaño libre del hueco que quiero para guardar la palabra MELCHOR POR EJEMPLO
    lista[1]=(char *) malloc(7*sizeof(char)); // el CHAR * obliga a que meta en ese sitio el numero que buscamos
    lista[2]=(char *) malloc(9*sizeof(char));
    printf("\nPrimer rey mago: ");
    scanf("%s",lista[0]); //lee una cadena de caracteres y guardala segun la posicion de memoria
    printf("\nSegundo rey mago: ");
    scanf("%s",lista[1]); 
    printf("\nTercer rey mago: ");
    scanf("%s",lista[2]); // scanf: equivalente a cin, manera de coger informaicon por teclado, BUFFER del teclado
    printf("\nLOS TRES REYES MAGOS SON: ");
    printf("%s, ",lista[0]);
    printf("%s y ",lista[1]);
    printf("%s",lista[2]);
    printf("\nToca cualquier tecla: ");
    scanf("%i",&salir);
  
    
}
