#include<iostream>
using namespace std;
int main(){
   int array[]={100,155,2,3,5,56,436,7347,4,75,85,46,7,7,7,4,4,3,4,646,46,6,46,4,6};
   int lar=0,temp;
   for (int i=0;i<25;i++)
   if(array[i]>lar)
       {lar=array[i];}
cout<<"largest elemet is "<<lar<<endl<<endl<<endl;
    return 0;
}