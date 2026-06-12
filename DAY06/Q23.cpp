#include<iostream>
using namespace std;

int main(){

    cout<<"Enter the number: "<<endl;

    int n,rem, power=1,ans=0;

    cin>>n;

    while (n>0)
    {
        rem = n%2;
        ans = ans+rem*power;
        n=n/2;
        power = power*10;
    }
    

cout<<"binary no: "<<ans<<endl;
int tem=0;
while (ans>0)
{
    int rem1;
    rem1 = ans%10;

    if (rem1==1)
    {
        tem++;

    }
    ans = ans/10;
    
}

 cout<<""<<tem<<endl;

}