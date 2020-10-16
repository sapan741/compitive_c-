// input of string and change there case upper to lower and lower to uppar
#include<iostream>
using namespace std;
int main(){
   char a[20];
   int count=0;
   cin>>a;
   for(int i=0;a[i]!='\0';i++)
       {if (a[i]>=97&&a[i]<=122)
       a[i]-=32;
       }
cout<<"upper case to letter is "<<a<<endl;

   for(int i=0;a[i]!='\0';i++)
       {if (a[i]>=65&&a[i]<=97)
       a[i]+=32;
       }
cout<<"lower case to letter is "<<a<<endl;
    return 0;

}