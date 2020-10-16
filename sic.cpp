#include <iostream>
using namespace std;
int main()
{
    int n,c,d;
    int limit;
    cin>>limit;
    for(int n=1;n<=(limit-1)/2;n++){
     c=n*2;
     d=n;
    }
    if (limit%2==0)
    cout<<"nth number is"<<d;
    else
    cout<<"odd nth number is"<<c;
    return 0;
}