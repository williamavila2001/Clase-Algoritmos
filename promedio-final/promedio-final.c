#include <stdio.h>
#include <stdlib.h>

void writeMessageNoteInvalidAndExit(){
    printf("Nota invalida.\n");  
    exit(0);
}
void validateNote(float note){
    if(note < 0.0 || note >5.0){
        writeMessageNoteInvalidAndExit();
    }
}

float requestNote(char* noteNumber){
    float note;
    printf("Ingrese la calificacion \n", noteNumber);
    scanf ("%f", &note);
    validateNote(note);
    return note;
}   

float calcProm(float notaOne, float notaTwo, float notaThree, float notaFour, float notaFive){
    return(notaOne+notaTwo+notaThree+notaFour+notaFive)/5;
}

void validateProm(float promedio){
    printf("\n Su promedio es: %f ", promedio);
    if( promedio >= 2.95){
        printf("Usted aprovo la asignatura. \n");
    } else {
        printf("Usted NO aprovo la asignatura. \n");
    } 
}
int main() {

    printf ("Este programa realiza el promedio de 5 notas \n");

    float notaOne;
    float notaTwo;
    float notaThree;
    float notaFour;
    float notaFive;
    float promedio;

    notaOne=requestNote("Primera");
    notaTwo=requestNote("Segunda");
    notaThree=requestNote("Tercera");
    notaFour=requestNote("Cuarta");
    notaFive=requestNote("Quinta");

    promedio = calcProm(notaOne,notaTwo,notaThree,notaFour,notaFive);
    validateProm(promedio);
	return 0;
}