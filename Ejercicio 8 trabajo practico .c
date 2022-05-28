
#include <stdio.h>

int main(){

	int A[10];

	for (int i=0 ; i<10 ; i++){
		if (i%2 == 0){
			A[i] = 1;
		}
		else {
			A[i] = 0;
		}
	}

	for (int i=0 ; i<10 ; i++){
		printf ("%d ",A[i]);
	}

	return 0;
}