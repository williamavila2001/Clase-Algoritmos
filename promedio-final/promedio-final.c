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
        if (notaOne>=0 && notaOne <=5){
            printf ("Digite la segunda nota:  \n");
            scanf ("%lf", &notaTwo);
        }else{
        printf("Usted digito alguna nota mal \n");
        }

        if (notaTwo>=0 && notaTwo <=5){
            printf ("Digite la tercera nota:  \n");
            scanf ("%lf", &notaThree);  
        }else{
        printf("Usted digito alguna nota mal \n");
        }
        
        if (notaThree>=0 && notaThree<=5){
            printf ("Digite la cuarta nota:  \n");
            scanf ("%lf", &notaFour);  
        }else{
        printf("Usted digito alguna nota mal \n");
        }
        
        if (notaFour>=0 && notaFour<=5){
            printf ("Digite la quinta nota:  ");
            scanf ("%lf", &notaFive); 
        }else{
        printf("Usted digito alguna nota mal \n");
        } 
        if (notaFive>=0 && notaFive <=5){
    suma= notaOne+notaTwo+notaThree+notaFour+notaFive;
}else{
        printf("Usted digito alguna nota mal \n");
}



    notaFinal= suma/5;
    if (notaFinal>=2.95){
        printf ("El estudiante aprobo la materia, con un promedio de:  %lf",notaFinal);
    }else{
        printf ("El estudiante NO aprobo la materia, con un promedio de:  %lf",notaFinal);
    }
           

	return 0;
}