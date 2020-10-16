// basic calculator using
//using only if
//using if else
//using if else ladded
//using switch
#include <iostream>

using namespace std;
int main()
{
    int day;
    cout << "enter the day";
    cin >> day;
    switch (day)
    {
    case 1:
    {
        cout << "the day is monday " << endl
             << endl
             << endl;
        break;
    }
    case 2:
    {
        cout << "the day is tuesday " << endl
             << endl
             << endl;
        break;
    }
    case 3:
    {
        cout << "the day is wednesday" << endl
             << endl
             << endl;
        break;
    }
    case 4:
    {
        cout << "the day is thrusday" << endl
             << endl
             << endl;
        break;
    }
    case 5:
    {
        cout << "the day is Friday" << endl
             << endl
             << endl;
        break;
    }
    case 6:
    {
        cout << "the day is Saturday" << endl
             << endl
             << endl;
        break;
    }
    case 7:
    {
        cout << "the day is sunday" << endl
             << endl
             << endl;
        break;
    }
    default:
    {
        cout << "please enter valid day from 1 to 7";
        break;
    }
    }

    return 0;
}