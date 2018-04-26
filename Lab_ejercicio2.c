#include <stdio.h>
#include <stdlib.h>

//inicialmente se pedira un numero entre 0 y 50, que seran los °C que se "graficarán"
//de ingresar un número menor a 0 o mayor a 50, se encontrará invalido y se pedira ingresar nuevamente un valor
int main (void){
	int numero=-1;
	while(numero<0||numero>50){
		printf ("ingrese un numero entre 0 y 50: ");
		scanf (" %d",&numero);
		if(numero<0||numero>50){
			printf ("Numero no valido!\n");
		}
	}
//luego se saltara un espacio y se mostraran valores de 10 en 10 con sus respectivos espacios 	
	printf("\n ");
	for (int i=0; i<=50;i++){
		if(i%10==0){
			printf ("%d",i);
			printf("        ");
		}	
	}
	printf("\n ");
//  debajo de cada multiplo de 10 aparecera "|" para indicar con exactitud donde se hubican 	
	printf ("|        ");
	for (int i=1; i<=50;i++){
		if(i%10==0){
			
			printf ("|         ");
		}
	}
	printf("\n ");
// para indicar la temperatura se utilizaran los "-" hasta llegar a los grados ingresados, representado con "*" 	
	for (int i=1; i<numero;i++){
		printf ("-");
	}
	printf ("*");
// despues de marcar exactamente los grados ingresados, se marcará con "-" hasta llegar al multiplo de 10 que le siga.	
	if(numero%10!=0){
		for (int i=0;i<10-numero%10;i++){
			printf("-");
		}
	}

return 0;
}
