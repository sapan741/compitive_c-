#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char a = 'r';
    int x = 0, y = 0;
    int distance = 10;
    while (n)
    {

        if (a == 'r')
        {
            x = x + distance;
            distance += 10;
            a = 'u';
        }
        else if (a == 'u')
        {
            y = y + distance;
            distance += 10;
            a = 'l';
        }
        else if (a == 'l')
        {
            x = x - distance;
            distance += 10;
            a = 'd';
        }
        else if (a == 'd')
        {
            y = y - distance;
            distance += 10;
            a = 'a';
        }
        else if (a == 'a')
        {
            x = x + distance;
            distance += 10;
            a = 'r';
            
        }
        n--;
    }
    cout << "current position is_x=" << x << "_y=" << y;
    return 0;
}
