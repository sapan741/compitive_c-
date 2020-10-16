#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int d;
    int number;
    char a, b, range;
    int count = 0;
    cout << "enter no of disticts";
    cin >> d;
    cout << "enter range of alphabets";
    cin >> a, b;
    cout << "range of digits";
    cin >> range;

    if (d >= 1 && d < 100)
    {
        for (int i = 1,j=a,k=a;i<= d,j<=b,k<=b; i++,j++,k++)
        {
                     cout << setw(2) << setfill('0') << i;
                     cout<< j<<k;
                     cout<<setw(4)<<setfill('0')<<number;
                     count++;
                
            
        }
        cout << "total numbe rof vehical is " << count;
    }
    return 0;
}