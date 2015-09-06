#include<iostream>
#include<iomanip>
using namespace std;
struct rect
{
float l,w,a,perimeter;
};
int main()
{
struct rect r;
cout<<"enter the length of rectangle=";
cin>>r.l;
cout<<"enter the width of rectangle=";
cin>>r.w;
r.a=r.l * r.w;
r.perimeter=(2*(r.l + r.w));
cout << fixed << showpoint << setprecision(2);
cout<<"Area="<<r.a;
cout<<"\nPerimeter="<<r.perimeter;
return 0;
}
