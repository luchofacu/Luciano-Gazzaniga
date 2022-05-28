#include <stdio.h>

int main(){
	
	int n;
	
	printf ("Ingrese la cantidad de partidos que se jugaron entre los equipos: ");
	scanf ("%d",&n);
	
	int equipoA[n], equipoB[n], i, empates=0, A=0, B=0;
	
	printf ("Ingrese la cantidad de goles que anoto cada equipo en cada partido: \n");
	for (i=0 ; i<n ; i++){
		
		printf ("equipo A: ");
		scanf ("%d",&equipoA[i]);
	
		printf ("equipo B: ");
		scanf ("%d",&equipoB[i]);
		
		if (equipoA[i] == equipoB[i]){
			printf("empate\n");
			empates++;
		}
		else{
			if(equipoA[i] > equipoB[i]){ 
				printf ("El ganador es el equipo A\n");
				A++;
			}
			else{
				printf ("El ganador es el equipo B\n");
				B++;
			}
		}
	}	
	
	
	printf ("sucedio/eron %d empate/s entre estos equipos\n",empates);
	
	if (A!=B){
		if (A>B){
			printf ("El ganador es el equipo A\n");
		}
		else{
			printf ("El ganador es el equipo B\n");
		}
	}
	else{
		printf ("los equipos tienen la misma cantidad de victorias que de derrotas");
	}
	
	
	return 0;
}