#include<iostream>
#include<cstdlib>
using namespace std;
void count(int *arr,int n,int dif){
  int count=0;
  for(int i=0;i<n;i++)
{
  for(int j=i+1;j<n;j++)
  {
    if (arr[j]-arr[i]==dif)
       count++;
  }
} 
cout<<"pairs presents are :"<<count<<endl;



}
int main(){

  system("cls");
  int n,dif;
  
  int *arr;
  cout<<"enter the size of array\n";
  cin>>n;
  arr= new int[n];
  cout<<"enter difference in terms of integer number \n";
  cin>>dif;
  cout<<"now enter array elements \n";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
//array mil gya number mil gya and array size pata he apne ko
//ab bs search krna he elements apne ko
count(arr,n,dif);

  return 0;
}