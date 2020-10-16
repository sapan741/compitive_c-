// basic calculator using
//using only if
//using if else
//using if else ladded
//using switch
#include <iostream>

using namespace std;
int main()
{
    float a, b;
    char op;
    cout << "enter a b and operator";
    cin >> a >> b >> op;
    switch (op)
    {
    case '+':
    {
        cout << "sum of the two is " << a + b << endl<<endl<<endl;
        break;
    }
    case '-':
    {
        cout << "substraction of the two is " << a - b << endl<<endl<<endl;
        break;
    }
    case '*':
        cout << "multiplication of the two is " << a * b << endl<<endl<<endl;
        break;
    case '/':
    {
        cout << "sum of the two is " << a + b << endl<<endl<<endl;
        break;
    }
    default:
        break;
    }

    return 0;
}