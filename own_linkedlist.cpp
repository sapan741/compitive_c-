#include <iostream>
using namespace std;
struct node
{
    int info;
    node *next;
} * start, *ptr, *save, *newptr;
node * create_new_node(int n)
{
    ptr = new node;
    ptr->info = n;
    ptr->next = NULL;
    return ptr;
}
void insert_beg(node *np)
{
    if (start == NULL)
        start = np;
    else
    {
        save = start;
        start = np;
        np->next = save;
    }
}
void display(node *np)
{
    while (np != NULL)
    {
        cout << np->info << "->";
        np = np->next;
    }
    cout << "!!!!!end of list!!!!!!";
}

int main()
{
    int val;
    for (val = 1; val < 20; val++)
    {
        newptr = create_new_node(val);
        insert_beg(newptr);
    }
    display(start);
    return 0;
}