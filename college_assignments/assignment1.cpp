#include <iostream>
using namespace std;

int main()
{   system("cls");
    int high=0,low=0;
    char a[20];
    cin >> a;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 65 && a[i] <= 90)
        {   high++;
            a[i] += 32;
            }

        else if (a[i] >= 97 && a[i] <= 122)
        {   low++;
            a[i] -= 32;}
    }
    cout << a<<endl;
    cout<<"low frequency letters are : "<<low<<endl;
    cout<<"high frequency letter are : "<<high<<endl;
    return 0;
}
