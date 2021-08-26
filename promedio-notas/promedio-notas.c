#include <stdio.h>

int main() {
    double notaOne;  
    double notaTwo;
    double notaThree; 
    double notaFour;
    double notaFive;
    double suma;
    double notaFinal;

    printf ("Este programa realiza el promedio de 5 notas \n");

    printf ("Digite la primer nota:  \n");
    scanf ("%lf", &notaOne);

    printf ("Digite la segunda nota:  \n");
    scanf ("%lf", &notaTwo);

    printf ("Digite la tercer nota:  \n");
    scanf ("%lf", &notaThree);

    printf ("Digite la cuarta nota:  \n");
    scanf ("%lf", &notaFour);

    printf ("Digite la quinta nota:  \n");
    scanf ("%lf", &notaFive);
    
    suma= notaOne+notaTwo+notaThree+notaFour+notaFive;

    notaFinal= suma/5;

    printf ("El promedio de las notas es: %lf",notaFinal);

	return 0;
}