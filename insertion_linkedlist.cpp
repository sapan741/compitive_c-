#include <iostream>
using namespace std;
struct node{
  int info;
  node *next;

}*start,*newptr,*save,*ptr;
//function 1
node * create_new_node(int n)
{
ptr=new node;
ptr->info=n;
ptr->next=NULL;
return ptr;
}
//function 2
void insert_beg(node * np){
if (start==NULL)
start=np;
else{
    save=start;
    start=np;
    np->next=save;
}
}
//function 3
void display(node* np)
{
    while(np!=NULL)
    {cout<<np->info<<"->";
    np=np->next;}
    cout<<"!!!!!!\n";
}

int main()
{
    start=NULL;
    int inf;
    char ch ='y';
    while(ch == 'y')
    {
        cout<<"enter information to be stored in new node"<<endl;
        
        for (int inf=100;inf>=1;inf--){
        newptr=create_new_node(inf);
        insert_beg(newptr);
        }
        display(start);
        cout<<"\n press y to enter more node";
        cin>>ch;
    }
    return 0;
}