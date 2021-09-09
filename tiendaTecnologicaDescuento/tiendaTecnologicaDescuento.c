#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void printInitiaMessage(){
	printf ("¡Bienvenido, este proegrama le ayudara a usted como comprador a saber que descuento se le aplico a su compre, o si por el contrario no se le aplico descuento. \n");
    printf ("¿Usted compro un televisor?\n");
	printf("1. Si\n");
	printf("2. NO\n");
}

void validateOption (float option, float valorCompra, float valorPago){
	if (option == 1){
		valorPago = valorCompra *0,15;
	}else {
		valorPago = valorCompra *0,10;
	}
}

float main(float argc, char *argv[]) {	 

	float option;
	float valorCompra;
	printf("Digite el valor total de la compra \n");
	scanf ("%f", &valorCompra);

	printInitiaMessage();
	return 0;
}
