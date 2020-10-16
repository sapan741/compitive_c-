#include <iostream>
using namespace std;
int bsearch(int a[], int e)
{
 int mid,s=0,l=99;
 while(s<=l)
 {
     mid= (l+s)/2;
     if(a[mid]==e)
     return mid;
     else if(e>mid)
     s=mid+1;
     else 
     l=mid-1;

 }  return -1;  
}
int main()
{
    int ch;
    int arr[100];
    cout << "array elements are"; //cration of an array
    for (int i = 0; i < 100; i++)
    {
        arr[i] = i;
        cout << i << ",";
    }
    cout << "enter element to be search" << endl;
    cin >> ch;
    int bin=bsearch(arr, ch);
    if (bin==-1)
    cout<<"sorry item not found "<<endl;
    else
    cout<<"item found at "<<bin<<endl;
    return 0;
}