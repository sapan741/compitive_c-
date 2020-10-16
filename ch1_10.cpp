//read a string and print its lenght
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
   char str[20];
   int count =0;
   cin>>str;
   for (int i=0;str[i]!='\0';i++)
   { count++;}

  cout<<"string length is "<<count<<endl;
  if (count%2!=0)
  cout<<"string can be pallindrom as the odd no of letter exits"<<endl;
  

    return 0;
}

