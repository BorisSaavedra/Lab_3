#include <stdio.h>
#include <stdlib.h> 
//esta funcion esta pensada para calcular el sueldo de acuerdo a las horas trabajadas
//multiplicando las horas por el precio de las horas.
float Sueldo_Total (float horas, float precio){
	float resultado;
	resultado = (horas*precio);
	return resultado;
}
// para poder calcular todo, se ingresara el precio de cada hora trabajada y las cantidad de horas trabajadas por dia
// utilizando el for se pedira la cantidad de hora dia por dia, 6 veces, ya que son las cantidad de dias trabajados
// luego se llamara la funcion de arriba para calcular el total a pagar por semana.
int main (void){
	float resultado;
	float precio;
	float hora;
	float conthoras=0;
	
	printf ("ingrese el precio por hora ");
	scanf ("%f",&precio);
	int i;
	for(i=0; i<6; i++){
		printf ("ingrese la cantidad de horas trabajadas ");
		scanf (" %f ",&hora);
		conthoras = conthoras+hora;
	}
	resultado=Sueldo_Total(conthoras, precio);
	printf("el suelto total es: $ %.f",resultado);
	return 0;
}
