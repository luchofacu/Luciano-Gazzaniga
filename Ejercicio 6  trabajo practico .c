
#include <stdio.h>

int main(){

	int DNI[10], i;
	float calificacion[10];

	printf ("Ingrese el DNI de un alumno y a continuacion su calificacion. Repita el proceso 10 veces\n");

	for (i=0 ; i<10 ; i++){
		printf ("El DNI es:");
		scanf ("%d",&DNI[i]);
		printf ("calificacion: ");
		scanf ("%f",&calificacion[i]);
	}

	for (i=0 ; i<10 ; i++){
		if (calificacion[i] >= 6){
			printf ("el alumno con el DNI %d esta aprobado.\n\n", DNI[i]);
		}
    }
	return 0;
}