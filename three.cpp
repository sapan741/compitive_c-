#include<iostream>
using namespace std;
int main()
{
long long number;
cin>>number;
long long sumEven=0;
long long sumOod=0;
int i=0;
while(number!=0)
{if (i%2==0){
    sumOod+=(number%10);
    number/=10;
    i+=1;}
else{ 
    sumEven+=(number%10);
    number/=10;
    i+=1;}
}


cout<<"sum is "<<endl<<"sum of odd:"<<sumOod<<"sum of even:"<<sumEven<<endl;
cout<<1%2 <<endl;
cout<<0%2 <<endl;
return 0;}