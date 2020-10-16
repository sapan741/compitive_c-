#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int a, b, isprime[1000];
    cout << "enter range between you wants prime number form a to b :";
    cin >> a;
    cin >> b;
    if(a<2){
    cout<<"out of range a must greter then or equal to 2";
    return 0;}
    for (int i = a; i <= b; i++)
    {
        isprime[i] = 1;
    }
    
    for (int i = a; i*i<=b; i++)
       { for (int j = i;  i*j <= b; j++)
           isprime[i*j] = 0;
        }

    cout << "now the prime numbers between a and b are";
    for (int i = a; i <= b; i++)
    {
        if (isprime[i] == 1)
            cout << i << "->";
    }

    return 0;
}