// 2 string contains equal no of characters
//read a string and print its lenght
#include<iostream>
#include<cstring>
using namespace std;
int count(string s)
{
int count =0;
for (int i=0;s[i]!='\0';i++)
   { count++;}
   return count;
}
int main()
{  int l1,l2;
   char str1[50];
   char str2[50];
   cin>>str1>>str2;
   l1=count(str1);
   l2=count(str2);
   if (strlen(str1)==strlen(str2))
   cout<<"string are of equal size"<<endl;
   else 
   cout<<"both strings contains unequal no. of characters"<<endl;
   return 0;
}

