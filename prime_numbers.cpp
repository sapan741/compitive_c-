#include <iostream>
using namespace std;
#define max 100

void prime()
{
    int isprime[max], i, j, primearray[max], count;
    int maxi = 0;
    for (i = 2; i <= max; i++)
    {
        isprime[i] = 1;
    }
    for (i = 2; i * i <= max; i++)
    {
        {
            for (j = i; i * j <= max; j++)
            {
                isprime[i * j] = 0;
            }
        }
    }

    for (i = 2; i <= max; i++)
    {
        if (isprime[i] == 1)
        {
            cout << i << ",";
            primearray[i] = i;
            count++;
        }
    }   cout<<"total element is "<<count<<endl;
        cout << "max prime number is " <<primearray[24] << endl;
        cout << "second max is" << primearray[23]<<endl;
    
}
int main()

    {
        prime();

        return 0;
    }