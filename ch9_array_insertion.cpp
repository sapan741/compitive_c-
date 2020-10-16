#include<iostream>
using namespace std;
int position(int a[],int e)
{   if(e<a[0])
return 0;
    for(int i=0;i<20;i++){
    if((a[i]<e) &&(a[i+1]>e))
    return i+1;}
    return -1;
}     
int position2(int a[],int e)
{   

    for(int i=0;i<20;i++)
    {if(a[i]==e)
    return i;
    break;
    }
    
}            
void add(int a[],int p,int e)
{
    for(int i=19;i>=p;i--)
    {
         
        a[i+1]=a[i];
    }
    a[p]=e;
}
int del(int a[],int num,int pos)
{
   for(int i=pos+1;i<20;i++)
   {
       a[i]=a[i+1];
   }

}
int main(){
    int arr[20],ele,p;
    for(int i=0;i<19;i++)      //even number array formed and printed

    {
        arr[i]=i*2;
        cout<<arr[i]<<",";
    }
    cout<<"enter element to be added"<<endl;
    cin>>ele;
    p=position(arr,ele);
    
    
    cout<<"array is added at position no "<<p<<endl;
    add(arr,p,ele);
    cout<<"enter element to be deleted"<<endl;
    int d;
    cin>>d;
    p=position2(arr,ele);
    del(arr,d,p);
    
for(int i=0;i<20;i++)      //final array printing

    {
        
        cout<<arr[i]<<",";
    }




    return 0;
}