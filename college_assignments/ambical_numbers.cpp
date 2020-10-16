//amicable number or not
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1,num2;
    int count=0;
    cout<<"enter number";
    
    cin>>num1;
    cout<<"enter another number : ";
    cin>>num2;
      for(int i=1;i<=(num1/2);i++)
      {
         if (num1 % i ==0)
         count+=i;
      }
    if (num2==count) cout<<"yes they are ambical numbers ";
    else cout<<"they are not ambical numbers";
    return 0;
}