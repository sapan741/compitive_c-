//  harshad number 
#include<iostream>
using namespace std;
int main ()
{  int n,count=0;
   cout<<"enter number";
   cin>>n;
   int num=n;
   while(n!=0)
   {
    count+=n%10;
    n/=10;
   }
   int h=num/count;
   if(count*h==num)
    cout<<"harsahd number";
    else cout<<"not a harshad number";
    return 0;
}