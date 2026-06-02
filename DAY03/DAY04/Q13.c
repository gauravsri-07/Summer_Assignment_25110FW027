#include<stdio.h>

void main(){

int a=0,b=1,c,n;

printf("no of terms in fibonacci series: ");

scanf("%d",&n);

printf(" fibonacci series : \n %d \n ",a);

for (int i = 0; i < n; i++)
{
    c=a+b;
    a=b;
    b=c;;
    printf("%d \n",c);
}



}