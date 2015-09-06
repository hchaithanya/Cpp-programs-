#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int n,p;
int sum=0;
cout<<"Enter number:";
cin>>n;
cout<<"\nEnter the power:";
cin>>p;
int s2=pow(n,p);
while(s2){
sum+=s2%10;
s2/=10;}
cout<<"\nThe sum of digits of "<<pow(n,p)<<" = "<<sum<<"\n";
return 9;
}
