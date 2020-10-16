#include<iostream>
using namespace std;
int main(){
    int maxr,maxc,i,j;
    int *val,*rsum,*csum;
    cout<<"enter size of array in row and column \n row:";
    cin>>maxr>>maxc;
    val = new int[maxr * maxc];
    rsum= new int [maxr];
    csum= new int [maxc];
    for(i=0 ;i<maxr;i++)
    {    cout<<"enter element for  row = "<<i<<":";
    rsum[i]=0;
        for(j=0 ;j<maxc;j++)
        {
            cin>>val[i*maxc+j];
            rsum+=val[i*maxc+j];
        }
    }
    for(j=0 ;j<maxc;j++)
        {
            csum[j]=0;
            for(i=0 ;i<maxr;i++)
            csum+=val[i*maxc+j];
        }
cout<<"\n.\n.\n.\n.\n.\n. now the given array with row sum and column sum is\n\n";
for(i=0 ;i<maxr;i++)
    {    
    
        for(j=0 ;j<maxc;j++)
        {
            cout<<val[i*maxc+j]<<"\t";
            cout<<rsum;
        }
    }
for(j=0;j< maxc;j++)
{cout<<csum[j]<<"t";}
cout<<endl;
return 0;
}