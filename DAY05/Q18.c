#include<stdio.h>

void main(){
    int n,rem,fact=1,sum=0;

    printf("enter a numberr: ");
    scanf("%d",&n);
int temp=n;
while(n>0)
        {
            rem = n%10;

    for (int i = 1; i <= rem; i++)
    {
        fact = fact*i;
    }
    
     sum+=fact;
     fact=1;
    n/=10;

}
       
if (sum==temp)
{
    printf("%d is strong number",temp);
}else{
    printf("%d is not a strong number",temp);
}
        

}