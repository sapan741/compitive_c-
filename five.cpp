#include <iostream>
using namespace std;
int main()
{
    char a[10],b[10],c[10];
    int i;
    cin >> a>>b>>c;
    for (i = 0; a[i] != '\0'; i++)
    {
        if ((a[i] == 'a' )|| (a[i] == 'i') || (a[i] == 'o') ||( a[i] == 'u') || (a[i] == 'e'))
            {a[i] = '*';}
        
    }
    for (i = 0; b[i] != '\0'; i++)
    {
        if (!(b[i] == 'a' )|| (b[i] == 'i') || (b[i] == 'o') ||( b[i] == 'u') || (b[i] == 'e'))
            {b[i] = '@';}
        
    }
for (i = 0; c[i] != '\0'; i++)
    {
        if ((c[i] >= 'a' )&&(c[i] <= 'z'))
            {c[i] -= 32;}
        
    } 



    cout << a<<b<<c;
    return 0;
}
