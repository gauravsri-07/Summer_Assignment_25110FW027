#include<stdio.h>

void main(){

int a=0,b=1,c,n;

printf("nth term of fibonacci series: ");

scanf("%d",&n);


for (int i = 0; i < n; i++)
{
    c=a+b;
    a=b;
    b=c;;

}

printf("%d",c);

}