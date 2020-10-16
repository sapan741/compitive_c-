#include<iostream>
#include<cstdlib>
using namespace std;
int  main()

{   system("cls");
     int n,p,count;
    string s;
    cout<<"enter total number of pages :";
    cin>>p;
    cout<<"enter no of page : ";
    cin>>n;
    count= (p/2)-(n/2);
    s="picchu se";
    if(n/2<count)
    {count=n/2;
    s="suru se";
    }
    cout<<"chal be: "<<count<<"page  "<<s<< "palat";

    
    
}