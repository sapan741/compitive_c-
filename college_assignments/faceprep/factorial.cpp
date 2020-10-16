#include<iostream>
using namespace std;
int main()
{
    int num;
    int fact =1;
    cin>>num;
    if (num<1)
    return -1; 
    while(num>1)
    {
        fact=fact*num;
        num--;
    }
   cout<<"factorial is -> "<<fact;
  
    return 0;
}