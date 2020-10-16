#include<iostream>
using namespace std;
int main()
{ int  lsize,bsize;
   int sum=0;
   int array[100][100];
   cout<<"rneter size of matrix ";
   cin>>lsize>>bsize;
   for (int i=lsize,j=bsize;i>=1,j>=1;i--,j--)
   {
       
       sum+=i*j;
   }

cout<<sum;

    return 0;

}