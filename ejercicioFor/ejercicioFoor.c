#include <stdio.h>

void initialMensage(){
    printf("Bienvenido este priograma le mostrara la tablas del numero que ingrese\n");
    printf("\n Ingrese el numero:");
} 

void cicloFor(int i, int initialNumber){
    for ( int i = 1; i<=10; i++ ){
        int opera=initialNumber*i;
        printf ("for : %d \n", opera); 
    }
}

void cicloWhile( int initialNumber){
    int i=0;
    while (i <=9){
        i ++;
        int opera=initialNumber*i;
        printf("while: %d \n", opera);     

    }
}

void cicloDoWhile(int i, int initialNumber){

    i=0;
    do {
        i ++;
        int opera=initialNumber*i;
        printf ("do while : %d \n", opera);
       
    } while (i<=9);
}

int main(int argc, char const *argv[]){

    initialMensage();
    int i;
    int initialNumber;
    scanf("%d", &initialNumber);

    cicloFor (i, initialNumber);
    cicloWhile(initialNumber);
    cicloDoWhile(i, initialNumber);

return 0;
}