//2 strings are reverse same or not  anagram
#include <bits/stdc++.h>
using namespace std;
int check(char a[], char b[], int m, int n)
{
    int flag = 0;
    int c=0;
    {
        for (int i = 0; a[i] != 0; i++)
        {
            for (int j = n; j >= 0; j--)
            {
                if (a[i] == b[j])
                {
                    flag=1;
                    
                }if (flag=1)
                {c++;
                break;}
            }
        }
        return c;
    }
    
}
int main()
{
    system("cls");
    char b[20], a[20];
    int n = 0, count = 0, count2 = 0, m = 0;
    int f=0;
    cout << "enter string a : ";
    cin >> b;
    cout << "enter another string b : ";
    cin >> a;
    for (int m = 0; b[m] != 0; m++)
    {
        count++;
    }
    n = count - 1;
    for (int m = 0; b[m] != 0; m++)
    {
        count2++;
    }
    m = count2 - 1;

    f = check(a, b, m, n);
    if ((f == count)&& (f==count2))
        cout << a << " and " << b << " are anagram words";
    else
        cout << a << " and " << b << " are  not anagram words";
    return 0;
}