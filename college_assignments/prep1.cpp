#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{  system("cls");
  int size,dif=0;
int d1=0,d2=0;
 cin>>size;
 int *array= new int [size*size];
 

 for(int i=0;i<size;i++)
 {  cout<<"row elements of row_"<<i<<"_are:";
    for(int j=0;j<size;j++)
    cin>>array[i*size +j];
 }

for(int i=0;i<size;i++)
 {  cout<<"\n row elements of row_"<<i<<"_are:";
    for(int j=0;j<size;j++)
      { cout<<array[i*size+j]<<",";  
    if(i==j)
        d1+=array[i*size +j];
    if((i+j)==(size-1)||((i+j)==(size-1))&&(i==j))
        d2+=array[i*size +j];
  }cout<<endl;
 }
cout<<"\n now sum of diagonal one is "<<d1<<endl;
cout<<"\n sum of diagonal two is"<<d2<<endl;
dif=(d1-d2);
if(dif<0)
dif=dif*-1;
cout<<"the difference between the d1 and d2 is"<<dif;
return 0;
}