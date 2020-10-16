//xsqr -sx+p
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a, b, c, root1, root2;
    cout << "enter the  coeficient of x2(a) and s(b) and c";
    cin >> a >> b >> c;
    root1 == (-b - (sqrt((b * b) - (4 * a * c))) / (2 * a));
    root2 == (-b + (sqrt((b * b) - (4 * a * c))) / (2 * a));
    cout << "here is roots are" << root1 <<endl<< root2 << endl;

    return 0;
}