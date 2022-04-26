#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// write a program for LinkedList
struct Node
{
    int data;
    Node *next;
};

struct Node *head = NULL;

void create(int num)
{
    // creating new node
    struct Node *temp;
    int value;
    // assigning space to 'temp' variable
    temp = (struct Node *)(malloc(sizeof(struct Node *)));
    // at 1st position, if there is no element
    // cout << "Enter value to add to LL: ";
    // cin >> value;
    if (head == NULL)
    {
        temp->data = num;
        temp->next = NULL;
        head = temp;
    }
    else
    {
        struct Node *ptr;
        ptr = head;
        while (ptr != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}

void display()
{
    // if no element is there
    if (head == NULL)
    {
        cout << "\nNo element!\n";
    }
    // if present
    struct Node *temp;
    temp = head;
    else
    {
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
}

int main()
{
    create(44);
    create(34);
    create(24);
    create(14);
    return 0;
}