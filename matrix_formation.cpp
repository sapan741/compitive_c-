#include <iostream>
using namespace std;
#define n 3
int fill(int m[n][n])
{
    cout << "enter element for matrix 3*3";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> m[i][j];
    }
    return m[n][n];
}
int show(int m[n][n])
{
    cout << " element of matrix are"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << m[i][j] << ",";
        }
        cout << endl;
    } return 1;
}
  int main()
    {
        int a[n][n], b[n][n], c[n][n];
        a[n][n] = fill(a);
        b[n][n] = fill(b);
        //matrix addition 
        for (int i = 0; i < n; i++)
        {
          for (int j = 0; j < n; j++)
          {   c[i][j]=0;
              for (int k=0;k<n;k++){
                 
                 c[i][j] += +a[i][k] * b[k][j];}
         }
       //matrix addition ends now read code for matrix substraction here
    }
        show(c);
        return 0;
    }

    // matrix addition 
    // for (int i = 0; i < n; i++)
    //     {
    //       for (int j = 0; j < n; j++)
    //       {   
    //         c[i][j]=0;
    //          c[i][j] = a[i][j] + b[i][j];
    //      }


    // //matrix substraction  
    //     for (int i = 0; i < n; i++)
    //     {
    //       for (int j = 0; j < n; j++)
    //       {   
    //         c[i][j]=0;
    //          c[i][j] = a[i][j] - b[i][j];
    //      }