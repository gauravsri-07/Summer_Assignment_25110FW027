#include<iostream>

using namespace std;

int main(){

int x,n,ans=1;
cout<<"enter x: "<<endl;
cout<<"enter n: "<<endl;
cin>>x;
cin>>n;

for (int i = 1; i <= n; i++)
{
    ans = ans*x;
    
}


cout<<""<<ans<<endl;
}