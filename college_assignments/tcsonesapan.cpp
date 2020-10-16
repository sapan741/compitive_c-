#include <iostream>

using namespace std;

int main()
{
   int d, l, r;
   char cl, cr;
   cin >> d;
   cin >> cl;
   cin >> cr;
   
   
   
   
   int a = cr - cl + 1;
   
   cin >> l;
   cin >> r;
   
   
   
   int digit = r - l + 1;
   
   
   
   long long res = d * (a * (a * (digit * (digit * (digit * digit)))));
   
   cout << res;
   
   return 0;
}