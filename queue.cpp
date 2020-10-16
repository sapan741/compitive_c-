#include <iostream>
using namespace std;
struct node
{
    int info;
    node *next;
} * start, *save, *ptr, *newptr, *rear;
node *create_new_node(int n)
{
    ptr = new node;
    ptr->info = n;
    ptr->next = NULL;
    return ptr;
}
void push(node *np)
{
    if (start == NULL)
  
    {
        start = rear = np;
    }
    else
    {
        rear->next = np;
        rear = np;
    }
}
void pop()
{
  if (start==NULL)
  cout<<"stack via linked list is underflow ";
  else {
      ptr=start;
      start=start->next;
      delete ptr;
  }
}  
void display(node *np)
{
    while (np != NULL)
    {
        cout << np->info << "->";
        np = np->next;
    }
    cout << "!!!!!!!!!!!!!!end of queue";
}
int main()
{
    int n;
    char ch='y';
    for (int i = 0; i < 5; i++)
    { 
        cout << "enter element to be added/ push in queue";
        cin >> n;
        newptr = create_new_node(n);
        // add this newptr to rear of the queue
        push(newptr);
        display(start);
    }
    
    cout<<"now lets delete/pop the node press y for deletion of node ";
    while(ch=='y')
    {
        pop();
        display(start);
        cin>>ch;
    }
    
        return 0;
}  
