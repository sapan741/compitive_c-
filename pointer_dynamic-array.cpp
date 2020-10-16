#include<iostream>
using namespace std;
int main(){
    int size;
    int* n;
    cout<<"enter size of array";
    cin>>size;
    n= new int[size];
    if(n!=NULL){
    cout<<"now inter array elements";
    for(int i=0;i<size;i++)
    cin>>n[i];
    cout<<"the inputted array is";
    for(int i=0;i<size;i++)
    cout<<n[i]<<",";}
    return 0;
}  