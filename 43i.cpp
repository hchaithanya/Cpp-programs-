#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int i,j;
char a[50][50]={"True","True","False","False"};
char b[50][50]={"True","False","True","False"};
cout<<"A\tB\tA AND B\t\tA OR B\n";
for(i=0,j=0;i<4,j<4;i++,j++)
{
cout<<a[i]<<"\t"<<b[i]<<"\t";
if(strlen(a[i])==4 && strlen(b[i])==4)
{
cout<<"True\t\tTrue\n";
}
if(strlen(a[i])==4 && strlen(b[i])==5)
{
cout<<"False\t\tTrue\n";
}
if(strlen(a[i])==5 && strlen(b[i])==4)
{
cout<<"False\t\tTrue\n";
}
if(strlen(a[i])==5 && strlen(b[i])==5)
{
cout<<"False\t\tFalse\n";
}
}
return 0;
}

