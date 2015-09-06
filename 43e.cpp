#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int x=10000;
cout<<setw(10)<<setfill('*')<<x<<"\n";
cout<<x<<setw(6)<<setfill('%')<<"\n";
cout<<"Ox"<<setw(8)<<setfill('^')<<"2710";
return 0;
}

