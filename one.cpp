/*Q1
Write a program to find the count of numbers which consists of unique digits.
Input:
Input consist of two Integer lower and upper value of an range
Output:
Output consists of single line, print the count of unique digits in given range. Else Print"No Unique Number"
Solution:
Input -
10
15
*/
#include <iostream>
using namespace std;
int main()
 {   
   int a,b,sum=0; 
    cin>>a>>b;
     for (int i=a;i<b;i++)
     {
         if(i%10!=i/10);
         {sum+=i;
         cout<<"unique number is"<<i<<endl;}
         i++;
     }
    cout<<"sum is"<<sum;

    return 0;
}
