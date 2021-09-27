#include <stdio.h>

int main(int argc, char const *argv[]){

    int numeroOne;
    int numeroTwo;
    int numeroThree;
    int numeroFour;
    int numeroFive;

    printf("Bienvenido, este programa le ayudara a saber que numeros son pares o impares\n\n");
    printf("Digite cinco numeros enteros mayores de cero\n\n");
    scanf("%d", &numeroOne);
    scanf("%d", &numeroTwo);
    scanf("%d", &numeroThree);
    scanf("%d", &numeroFour);
    scanf("%d", &numeroFive);    

    if (numeroOne>0 && numeroTwo>0 && numeroThree>0 && numeroFour>0 && numeroFive>0)
    {
        if (numeroOne % 2== 0){
        printf("%d es par.\n", numeroOne);
        }else{
        printf("%d es impar.\n", numeroOne);
        }
        if (numeroTwo% 2== 0){
        printf("%d es par.\n", numeroTwo);
        }else{
        printf("%d es impar.\n", numeroTwo);
        }
        if (numeroThree % 2== 0){
        printf("%d es par.\n", numeroThree);
        }else{
        printf("%d es impar.\n", numeroThree);
        }

        if (numeroFour % 2== 0){
        printf("%d es par.\n", numeroFour);
        }else{
        printf("%d es impar.\n", numeroFour);
        }

        if (numeroFive % 2== 0){
        printf("%d es par.\n", numeroFive);
        }else{
        printf("%d es impar.\n", numeroFive);
        }        

    }else{
        printf("No todos los numeros ingresados son enteros mayores de 0, verifique!.\n");
    }
   
    return 0;
}
