#include<stdio.h>
#include<math.h>

void main(){

int n,digits=0,num,rem,original_num,sum =0;

printf("enter a number: ");

scanf("%d",&n);

num=n;
original_num=num;
while (n!=0)
{
    digits++;
    n = n/10;

}


while(num!=0)
{
    rem = num%10;
    sum += pow(rem,digits);
    num = num/10;

}

if (original_num== sum)
{
    printf("%d is armstrong number",sum);
}else{
    printf("not a armstrong number");
}



}