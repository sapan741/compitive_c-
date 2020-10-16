#include<iostream>
using namespace std;
int main(){
int month,day,year;
cout<<"enter day ,months & year : ";
cin>>day>>month>>year;
int odd_days=0;
odd_days+=day;
switch (month-1)

{
case 1:
    odd_days += 3;
    break;
case 2:
    odd_days += 3;
    break;
case 3:
    odd_days += 6;
    break;
case 4:
    odd_days += 8;
    break;
case 5:
    odd_days += 11;
    break;
case 6:
    odd_days += 13;
    break;
case 7:
    odd_days += 17;
    break;
case 8:
    odd_days += 20;
    break;
case 9:
    odd_days += 22;
    break;
case 10:
    odd_days += 25;
    break;
case 11:
    odd_days += 27;
    break;

default:
    break;
}
int s=year%400;
int i=s%100;
int cent=s-i;
if(cent==100)
odd_days+=5;
else if (cent==200)
odd_days+=3;
else if (cent==300)
odd_days+=1;
int leap_years=i/7;
odd_days+=(leap_years*2);
int normal_years=i-leap_years;
odd_days+=normal_years;
odd_days=(odd_days)%7;
if (year%4==0)
odd_days+=1;
cout<<"odd_days by 7 : "<<odd_days;
return 0;
}