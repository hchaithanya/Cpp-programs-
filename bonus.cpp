#include<iostream>
using namespace std;
int main()
{
unsigned long long sum=0;
int f=1,i,j;
for(i=1;i<=15;i++)
{
for(j=1;j<=i;j++)
{
f=f*j;
}

sum+=f;
f=1;
}
cout<<"sum of 1st 15 factorials is :"<<sum;

return 0;
}
