//factorial calculation
#include<iostream>
using namespace std;
int main(){
    int n,f=1;
    cin>>n;
    while(n>1)
    {f=f*n;
    n--;}
    cout<<"the factorial is"<<f;
    return 0;
}