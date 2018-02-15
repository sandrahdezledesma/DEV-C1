//programa que guarde los ganadores de OT. Para ello nos dan este programa.
//1ª pregunta: Marca en el propio programa cual seria la utilidad de cada una de las lineas señaladas, 3 lineas por explicacion
int posicion; // 1.Establecer la variable posicion, definimos una variable llamda posicion, para guardar o reservar memoria para un numero entero.
char *ganadores[3]; // 2. Es un vector llamado ganadores de 3 punteros o posiciones  (contienen posiciones de memoria), donde cada uno de las cuales es 1 puntero, 
//que apuntan a letras, a char.
for(posicion=0;posicion<3:poscion++){
    ganadores[posicion]=(char*) malloc(10*sizeof(char));//malloc: intruccion que reserva memoria //3. Reservamos memoria para 10 caracteres o posiciones de memoria 
//por el tamaño de una letra, 
//que coge la direccion para guardarlo o almacenarlo en ganadores [posicion] y lo repite para 0 para 1 y para 2                                                                 
}
strcpy(ganadores[0], "Amaia");// 4. Sirve para guardar lo de la derecha, en este caso Amaia, en lo de la izquierda, en ganadores con la posicion 0
strcpy(ganadores[0], "Aitana");
strcpy(ganadores[0], "Miriam");
