#include <stdio.h>

int main()
{
    int A[10];
    for (int i=0;i<10;i++)
    {
    printf("Ingrese el valor %d\n", i);
    scanf("%d",&A[i]);
    }
    
    for (int i=0;i<10;i++){
    if(A[i]%2==0){
        A[i]=0;
        printf("%d\n",A[i]);
    }
    else {
        printf("%d\n",A[i]);
    }
    }  
}