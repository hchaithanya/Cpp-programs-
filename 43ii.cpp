#include<iostream>
using namespace std;
int main()
{
int i,j,x[]={0,0,1,1};
int y[]={0,1,0,1};
cout<<"x\ty\tx XOR y\n";
for(i=0,j=0;i<4,j<4;i++,j++)
{
cout<<x[i]<<"\t"<<y[j]<<"\t";
if(x[i]==y[j])
{
cout<<"0\n";
}
else
{
cout<<"1\n";
}
}
return 0;
}
