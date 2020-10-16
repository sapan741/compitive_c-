//programme to read radii of circle,calculate  area and perimeter and display then
#include<iostream>
using namespace std;
int main()
{   float r,p,a;
    const float pi=3.14;
    cin>>r;       ///read input radii
    cout<<"area is - "<<r*pi*r<<endl;    //calculate and out area
    cout<<"perimeter is - " <<2*pi*r<<endl;//calculate and cout perimeter
    return 0;
}