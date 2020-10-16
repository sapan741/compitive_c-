#include<iostream>
using namespace std;
void lsearch(int a[],int e)
{
    for(int i=0;i<100;i++)
    {if (a[i]==e)
    {
        cout<<"element found at position_"<<i<<endl;
        break;
    }}
}
int main()
{   int ch;
    int arr[100];
    cout<<"array elements are";    //cration of an array
    for(int i=0;i<100;i++)
    {
        arr[i]=i;
        cout<<i<<",";
    }
    cout<<"enter element to be search"<<endl;
    cin>>ch;
    lsearch(arr,ch);
    return 0;
}