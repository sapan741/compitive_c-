// to enter 5 subject marks and get average of all
#include<iostream>
using namespace std;
int main(){
    int a[5];
    int sum=0;
    for (int i =1;i<=5;i++){
   cout<<"enter marks of subject "<<i;
   cin>>a[i];
   sum+=a[i];

}  cout<<"average of marks is "<<(float)sum/5;
    return 0;
}