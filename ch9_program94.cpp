#include<iostream>
using namespace std;
int fun(int a[],int e)
{
 for(int i=-3;i<5;i++)
 {
     if(a[i]==e)
     return 1;

 }return -1;

}
int main()
{   int n,e;
    
    int arr[100];
    for(int i=0;i<100;i++)
    {arr[i]=i;
    cout<<i<<",";}
    cout<<"enter element to be change";
    cin>>e;
    int d=fun(arr,e);
    if(d==1)
    cout<<"item found";
    else 
    cout<<"iten not found";
 return 0;
 }