#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void printInitiaMessage(){
	
	printf ("Bienvenido, este programa le ayudara a usted como comprador a saber que descuento se le aplico a su compra. \n\n");
	printf ("Dentro de sus compras usted incluyo un televisor?\n");
	printf("1. Si\n");
	printf("2. NO\n");
}

void valorDescuentoUno (float valorCompra, float valorDescuento, float totalPago){
	valorDescuento=valorCompra * 0.15;
	printf("El valor de su descuento es de un 15 Porciento y es: \n %f", valorDescuento);
	totalPago= valorCompra - valorDescuento;
	printf("\nEl valor que usted va a pagar es:\n %f", totalPago);
}

void valorDescuentoDos (float valorCompra, float valorDescuento, float totalPago){
	valorDescuento=valorCompra * 0.10;
	printf("El valor de su descuento es de un 10 Porciento y es: \n %f", valorDescuento);
	totalPago= valorCompra - valorDescuento;
	printf("\nEl valor que usted va a pagar es:\n %f", totalPago);
}


void validateOption (float option, float valorCompra, float valorDescuento, float totalPago){
	if (option == 1){
		valorDescuentoUno(valorCompra, valorDescuento, totalPago);
	}else {
		valorDescuentoDos(valorCompra, valorDescuento, totalPago);
	}
}

void validateMonth (float month){

   // `time_t` is an arithmetic time type
    time_t now;
    // Obtain current time
    // `time()` returns the current time of the system as a `time_t` value
    time(&now);
    // Convert to local time format and print to stdout
    printf("Today is %s", ctime(&now));
    // localtime converts a `time_t` value to calendar time and
    // returns a pointer to a `tm` structure with its members
    // filled with the corresponding values
    struct tm *local = localtime(&now);
     month = local->tm_mon + 1;     
    // print the current date
    printf("El mes es: %02f\n", month);
  
    if (month==9){
    	printf("Felicidades este mes aplica un espectacular descuento \n\n", month);
	} else{
		printf("Este mes no hay descuento", month);
		exit(0);
	}
	
}
float main(float argc, char *argv[]) {	 

	float month;

	validateMonth(month);

	printInitiaMessage();
	float option;
	float valorCompra;
	float valorDescuento;
	float totalPago;
	scanf ("%f", &option);

	printf("Dijite el valor de su compra\n");
	scanf("%f", &valorCompra);

	validateOption ( option, valorCompra, valorDescuento, totalPago);


	return 0;
}
