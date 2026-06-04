#include<stdio.h>

void main(){

    int n;
    printf("enter a num: ");
    scanf("%d",&n);

    printf("factors of %d are: \n",n);

    for (int i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            printf("%d \n",i);
        }
        
    }
    
}