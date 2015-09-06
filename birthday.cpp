#include<iostream>
using namespace std;
int leap(int);
typedef struct
{
int dd,mm,yy;
}date;

int main()
{
date dob,cd,age;
int d=0,i;
cout<< "enter dob and current date/month/year\n";
cin>>dob.dd>>dob.mm>>dob.yy>>cd.dd>>cd.mm>>cd.yy;
if((cd.yy-dob.yy) >1)
{
for(i=dob.yy+1;i<cd.yy;i++)
{
if(leap(i))
    d+=366;
else
    d+=365;
}
}
switch(dob.mm)
{

case 1:  d+=(31-dob.dd)+334;
         if(leap(dob.yy))
         d++;
         break;
case 2:  d+=(28-dob.dd)+306;
         if(leap(dob.yy))
         d++;
         break;
case 3:  d+=(31-dob.dd)+275;
         break;
case 4:  d+=(30-dob.dd)+245;
         break;
case 5:  d+=(31-dob.dd)+214;
         break;
case 6:  d+=(30-dob.dd)+184;
         break;
case 7:  d+=(31-dob.dd)+153;
         break;
case 8:  d+=(31-dob.dd)+122;
         break;
case 9:  d+=(30-dob.dd)+92;
         break;
case 10: d+=(31-dob.dd)+61;
         break;
case 11: d+=(30-dob.dd)+31;
         break;
case 12: d+=(31-dob.dd);
         break;
}
switch(cd.mm)
{
case 1:  d+=cd.dd;
         break;
case 2:    d+=cd.dd+31;
                break;
case 3:    d+=cd.dd+31+28;
                break;
case 4:    d+=cd.dd+31+28+31;
                break;
case 5:    d+=cd.dd+31+28+31+30;
                break;
case 6:    d+=cd.dd+31+28+31+30+31;
                break;
case 7:    d+=cd.dd+31+28+31+30+31+30;
                break;
case 8:    d+=cd.dd+31+28+31+30+31+30+31;
                break;
case 9:    d+=cd.dd+31+28+31+30+31+30+31+31;
                break;
case 10:   d+=cd.dd+31+28+31+30+31+30+31+31+30;
                break;
case 11:   d+=cd.dd+31+28+31+30+31+30+31+31+30+31;
                break;
case 12:   d+=cd.dd+31+28+31+30+31+30+31+31+30+31+30;
                break;
}
if(leap(cd.yy))
d++;
cout<<"age in days="<<d;
age.yy=d/366;
age.dd=d-366*age.yy;
age.mm=age.dd/30;
age.dd=d-age.yy*365-age.mm*30;
cout<<endl<<"your age is"<<age.yy<<"years,  "<<age.mm<<"months and  "<<age.dd<<"days"<<endl;
cout<<endl<<"age in hours"<<(d*24);
cout<<endl<<"age in minutes"<<(d*24*60);
return 0;
}
int leap(int x)
{
if(x%4==0)
{
if(x% 100 == 0 )
return 1;
else if(x % 10 == 0)
return 0;
else
return 1;
}
else
return 0;
}




