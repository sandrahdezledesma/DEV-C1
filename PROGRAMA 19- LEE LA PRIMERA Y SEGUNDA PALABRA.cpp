//PUNTEROS PARTE 4- lee primera y segunda palabra
#include<stdio.h>

int main(){
    int salir;
    char palabra1[5];
    char palabra2[5];
    printf("\nDime algo: ");
    scanf("%s", palabra1);
    printf("Dime algo mas: ");
    scanf("%s",palabra2);
    printf("Direccion palabra1= %x",palabra1);
    printf("palabra1 = %c\n",*(palabra1+1)); //\n es retorno de carro, salta ala linea siguiente
    printf("Direccion palabra2= %x",palabra2);
    printf("palabra2 = %c",*(palabra2+1)); 
    scanf("%i",&salir);
// el resultado es donde esta localizado
}
