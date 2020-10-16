#include <iostream>
using namespace std;
void leap_year()
{
    system("cls");
    int year;
    cout << "enter the year in yyyy format:" << endl;
    cin >> year;
    if (year % 4 == 0)
        cout << "its a leap year" << endl;
    else
        cout << "not a leap year" << endl;
}
void factorial()
{
    int num;
    int fact = 1;
    cout << "enter number between 1 to n : " << endl;
    cin >> num;

    while (num > 1)
    {
        fact = fact * num;
        num--;
    }
    cout << "factorial is -> " << fact << endl;
    system("pause");
}
void areaofcircle()
{
    int r;
    cout << "enter radius : " << endl;
    cin >> r;
    cout << "the area of circle is :" << 3.14 * r * r << endl;
    system("pause");
    cout << endl;
}
int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}
void hcfofthree()
{
    int a, b, c,hcf;
    cout << "enter three numbers";
    cin >> a >> b >> c;
    int min = (a < b ? a : b);
    min = (min < c ? min : c);
    for (int i = min; i > 0; i--)
    {
        if (a % i == 0 && b % i == 0 && c % i == 0)
        {
            hcf = i;
            break;
        }
    }
    cout<<"hcf ot three numbers is : "<<hcf<<endl;
    system("pause");
}
int main()
{
    int ch;
    do
    {
        system("cls");
        cout << "please select from the menu" << endl;
        cout << "press 1  find leap year" << endl;
        cout << "press 2 find factorial of given number" << endl;
        cout << "press 3  find area of a circle" << endl;
        cout << "press 4  find GDC or HCF of two" << endl;
        cout << "press 5 to find hcf of three numbers " << endl;
        cout << "press 0 zero for exit" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            leap_year();
            break;
        case 2:
            factorial();
            break;
        case 3:
            areaofcircle();
            break;
        case 4:
            int n, n2;
            cout << "enter numbers" << endl;
            cin >> n >> n2;
            cout << gcd(n, n2);
            cout << endl;
            system("pause");
            break;
        case 5:
            hcfofthree();
            break;
        default:
            break;
        }

    } while (ch != 0);

    return 0;
}