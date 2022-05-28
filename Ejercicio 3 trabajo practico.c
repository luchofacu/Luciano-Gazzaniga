#include <stdio.h>

int main()
{
 float A[5];

for (int i = 0; i< 5; i++) 
{
    printf("Ingrese el valor %d \n", i);
    scanf ("%f", &A[i]);
}

for (int i = 0; i< 5; i++) 
{
    printf("El valor multiplicado por 1,65 es %f \n", A[i]*1.65);    
}
    
}
