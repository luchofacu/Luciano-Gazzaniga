
#include <stdio.h>

int main(){

	int jugador1[8], jugador2[8], i; 

	printf ("Ingrese DNI de los jugadores de la primera lista: \n");
	for (i=0 ; i<8 ; i++){
		scanf ("%d",&jugador1[i]);
	}
	printf ("\nIngrese DNI de los jugadores de la segunda lista: \n");
	for (i=0 ; i<8 ; i++){
		scanf ("%d",&jugador2[i]);
	}

	for (i=0 ; i<8 ; i++){
		printf ("%d con %d, ",jugador1[i], jugador2[7-i]);
	}

	return 0;
}