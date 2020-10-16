//program to illustrate working of callc by value method 
#include<iostream>
using namespace std;
int swap(int &x,int &y){
    int c =x;
    x=y;
    y=c;
}

int main(){
   int a,b,s;
   cout<<"enter a , b";
   cin>>a>>b;
   cout<<"a and b are a= "<<a<<"& b= "<<b<<endl;
   swap(a,b);
   cout<<"after swapping a and b are a= "<<a<<"& b= "<<b<<endl;

  return 0;
}