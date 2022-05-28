#include <stdio.h>


int main(){

	int A[5], mas= 0, menos= 0, i;
	
	for(i=0 ; i<5 ; i++){
    	printf("Ingrese valor: ");
    	scanf("%d",&A[i]);
	}

	for (i=0 ; i<5 ; i++){
		if (i>0 && A[i] > A[i-1]){
			mas++;
		}
	}
	
	for (i=0 ; i<5 ; i++){
		if (i>0 && A[i] < A[i-1]){
			menos++;
		}
	}

	if (mas == 4){
		printf ("El vector es monotono creciente. ");
	}

	if (menos == 4){
		printf ("El vector es monotono decreciente. ");
	}
	
	if (mas!=4 && menos!=4){
		printf ("El vector no es monotono. ");
	}
	
	
	return 0;

}