#include<iostream>
using namespace std;
int main()
{  int day,year,month;
   int month_code,sc;
   cout<<"enter date day";
   cin>>day;
   cout<<"enter month day";
   cin>>month;
   cout<<"enter year day";
   cin>>year;
   switch (month)
   {
   case 1: if(year%4==0)
       month_code=6;
       month_code=0;
       break;
       case 2:if(year%4==0)
       month_code=2;
       month_code=3;
       break;case 3:
       month_code=3;
       break;case 4:
       month_code=6;
       break;case 5:
       month_code=1;
       break;case 6:
       month_code=4;
       break;case 7:
       month_code=6;
       break;case 8:
       month_code=2;
       break;case 9:
       month_code=5;
       break;case 10:
       month_code=0;
       break;case 11:
       month_code=3;
       break;case 12:
       month_code=5;
       break;
   default:
       break;
   }
   


if (((year>=1600)&&(year<1700))||((year>=2000)&&(year<2100)))
    sc=6;
    else if (((year>=1700)&&(year<1800))||((year>=2100)&&(year<2200)))
    sc=4;
           else if (((year>=1800)&&(year<1900))||((year>=2200)&&(year<2300)))
           sc=2; 
                else if (((year>=1900)&&(year<2000))||((year>=2300)&&(year<2400)))
                         sc=0;

cout<<month_code<<"_"<<sc;
int result =(day+month_code+(year/100)+sc+((year%100)/4))%7;
switch (result)
{
case 1:
    cout<<"monday";
    break;
    case 2:
    cout<<"tuesday";
    break;
    case 3:
    cout<<"wednesday";
    break;
    case 4:
    cout<<"thrusday";
    break;
    case 5:
    cout<<"friday";
    break;
    case 6:
    cout<<"saturday";
    break;
    case 0:
    cout<<"sunday";
    break;
    

default:
    break;
}
return 0;
}

