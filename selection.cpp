// C++ program for implementation of selection sort  
#include <bits/stdc++.h> 
using namespace std; 
void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}    
void selectionSort(int arr[],int n)
{ int i,j,small;
for(i=0;i<n-1;i++)
{
    small=i;
    for(j=i+1;j<n;j++)
    if(arr[j]<arr[small])
    small=j;
    swap (&arr[small],&arr[i]);
}
}
/* Function to print an array */
void printArray(int arr[], int size)  
{  
    int i;  
    for (i=0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}  
// Driver program to test above functions  
int main()  
{  
    int arr[] = {64, 25, 12, 22, 11,200,100,99,34,56,78,90,12,34,43,65,87,9};  
    int n = sizeof(arr)/sizeof(arr[0]);  
    selectionSort(arr, n);  
    cout << "Sorted array: \n";  
    printArray(arr, n);  
    return 0;  
}  
  
