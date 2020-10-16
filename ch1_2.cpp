//programme to read cordinates of two points and calculate
//the distance between them as d=underroot((sqrt(x1-x2))+(sqrt(y1-y2)))
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float d ,x1,x2,y1,y2;
    cin>>x1>>x2>>y1>>y2;
    d=sqrt(pow((x1-x2),2)+pow((y2-y1),2));
    cout<<"the distace between them is "<<d<<endl;
    return 0;
}
