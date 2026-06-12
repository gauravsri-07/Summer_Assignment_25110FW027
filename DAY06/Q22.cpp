#include<iostream>
using namespace std;

int main(){

    cout<<"Enter the number: "<<endl;

    int n,rem, power=1,ans=0;

    cin>>n;

    while (n>0)
    {
        rem = n%10;
        ans = ans + rem*power;
n=n/10;
power=power*2;
    }
    
    cout<<"Decimal no: "<<ans<<endl;}
