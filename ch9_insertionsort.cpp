#include <iostream>
using namespace std;
void selection_sort(int a[])
{ int small,temp;
  for (int i = 0; i < 10; i++)
    { small=a[i];
     for (int j= i+1;j<10; j++)
      { if(a[j]<small)
          
      small=a[j];
                
      } 
    a[i]=small;
    }
     cout<<"shorted array is "<<endl;
  for (int i = 0; i < 10; i++)
  {
    
    cout << a[i] << ",";
  }
}
int main()
{
  int arr[10];
  cout << "enter array" << endl;
  for (int i = 0; i < 10; i++)
  {
    cin >> arr[i];
    
  }

  selection_sort(arr);
 
  return 0;
}