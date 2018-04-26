#include <stdio.h>
#include <stdlib.h>

// se calculara el total a pagar durante los meses que se solicito el pago
// para eso se ocupara un contador que irá almacenando el total desde el monto inicial 10
// dependiendo del mes que se ingrese dentro del rango de cuotas es el total que se mostrará
void calcular(int num){
	
	int cont=10,suma=10;
	printf ("+%d\n",suma);
	while (num>1){
		cont=cont*2;
		suma=suma+cont;
		num=num-1;
		printf ("+%d\n",cont);
	}
	printf ("el total a pagar es: %d",suma);
}
// se solicitará que ingrese un valor, el cual será el del mes que quiera ver, para saber cuanto debe pagar dicho mes
// luego se llamará a la funcion de arriba, para calcular el total a pagar del mes y el total a pagar en general.
int main (void){
	int numero;
	printf ("ingrese un valor ");
	scanf ("%d",&numero);
	calcular(numero);
	
return 0;	
}

	
