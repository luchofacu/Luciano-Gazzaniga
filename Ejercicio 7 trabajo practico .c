
#include <stdio.h>

int main(){

	int i, maximo, maxPrecio, maxVelocidad;
	float Precio[5], GHz[5];

	for (i=0 ; i<5 ; i++){
		printf ("Precio: ");
		scanf ("%f",&Precio[i]);
		printf ("Velocidad en GHz: ");
		scanf ("%f",&GHz[i]);
	}

	maximo = 0;

	for (i=0 ; i<5 ; i++){
		if (Precio[i]>maximo){
			maximo = Precio[i];
			maxPrecio = i;

		}
	}

	maximo = 0;

	for (i=0 ; i<5 ; i++){
		if (GHz[i]>maximo){
			maximo = GHz[i];
			maxVelocidad = i;
		}
	}

	if (maxVelocidad == maxPrecio){
		printf ("El procesador mas caro es el mas veloz. ");
	}
	else{
		printf ("El procesador mas veloz es el de la posicion %d, pero no el mas caro.",maxVelocidad);
	}



	return 0;
}