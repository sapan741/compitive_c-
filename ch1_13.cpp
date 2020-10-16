// program to chech if string is pallindrom or not eg radar
#include<iostream>
#include<cstring>
using namespace std;
int main(){
   char str[20];
   int flag=0;
   cout<<"enter the string";
   cin>>str;
   int l= strlen(str);
   cout<<"the length os the string is  "<<l<<endl;
   for(int i=0,j=l-1;i<l/2;i++,j--)
   {if(str[i]!=str[j])
   flag=1;
   break;
   }
   flag==1?cout<<"not a pallindrom"<<endl:cout<<"yup!!!!!!its a pallindrom number"<<endl;
    return 0;
}