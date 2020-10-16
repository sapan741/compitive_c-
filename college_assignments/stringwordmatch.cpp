#include <iostream>
using namespace std;
int main()
{
int count =0;
int num[10];
char s1[10],s2[10];
cin>>s1>>s2;
for (int i=0;s1[i]!=0;i++)
{
   for (int j=0;s2[j]!=0;j++)
   if(s1[i]==s2[j])
   {
       count ++;
       continue;
   }
num[i]=count;
count=0;
}
for (int i=0;s1[i]!=0;i++)
{ 
    if (num[i]>0)
    cout<<"_____"<<s1[i];


}
return 0;
}   