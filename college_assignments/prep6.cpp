#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{   system("cls");
    int prisonerNumber,candyNumber,luckyNumber,num,chorNumber;
  cout<<"enter prisonar number : ";
  cin>>prisonerNumber;
  cout<<"enter canday number : ";
  cin>>candyNumber;
  cout<<"enter lucky number from we are starting : ";
  cin>>luckyNumber;
  num=candyNumber%prisonerNumber;
  chorNumber=num+luckyNumber;
  if(chorNumber>prisonerNumber)
  chorNumber-=prisonerNumber;
  cout<<"name number is unlucky person is : "<<chorNumber-1<<endl;
return 0;

}


  





  
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if (i<10)
        {
            switch(i)
            {
                
                case 1:
                cout<<"one"<<endl;
                break;
                case 2:
                cout<<"two"<<endl;
                break;
                case 3:
                cout<<"three"<<endl;
                break;
                case 4:
                cout<<"four"<<endl;
                break;
                case 5:
                cout<<"five"<<endl;
                break;
                case 6:
                cout<<"six"<<endl;
                break;
                case 7:
                cout<<"seven"<<endl;
                break;
                case 8:
                cout<<"eight"<<endl;
                break;
                case 9:
                cout<<"nine"<<endl;
                break;
            }
        }
    else if(i%2==0)
    cout<<"even"<<endl;
    else
    cout<<"odd"<<endl;
    }
    return 0;
}