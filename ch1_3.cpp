//temperatur conversation program
#include <iostream>
using namespace std;
int main()
{
    int f, c,choise;
    do{cout << "choose from the between"<<endl;
    cout << "press  1 for c_to_f conversion "<<endl;
    cout << "press  2 for f_to_c conversion "<<endl;
    cout << "press  3 for exit "<<endl;
    cin >>choise;
    if(choise==1)
            {cout<<"welcome to celcious to farenhite conversion"<<endl<<"enter value in calcious"<<endl;
             cin>>c;
             cout<<"the value of "<<c<<" into celcious is "<<c*1.8+32<<endl;
             
             }
    if (choise==2) {cout<<"welcome to farenhite to celcious conversion"<<endl<<"enter value in farenhite"<<endl;
             cin>>f;
             cout<<"the value of "<<f<<" into celcious is "<<(f-32)/1.8<<endl;
             
             }

    
    }while(choise!=3);
    return 0;
}