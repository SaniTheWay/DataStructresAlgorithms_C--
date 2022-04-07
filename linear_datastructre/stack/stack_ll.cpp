// Question : Stack using LINKEDLIST
// Question Link : _____
// Approach: _____
// status : _____

#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
struct Node *head = NULL;
void push(int num)
{
    struct Node *temp;
    // int value;
    temp = (struct Node *)(malloc(sizeof(struct Node *)));

    temp->data = num;
    if (head == NULL)
    {
        temp->next = NULL;
        // head = temp;
    }
    else
    {
        temp->next = head;
    }
    head = temp;
}
void display()
{
    struct Node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

void pop()
{
    if (head == NULL)
    {
        cout << "Empty Stack";
    }
    head = head->next;
}

void peek()
{
    if (head == NULL)
    {
        cout << "Empty Stack";
    }
    else
    {
        cout << "head element: " << head->data;
    }
}

int main()
{
    push(5);
    push(15);
    push(25);
    push(35);
    // display
    display();
    pop();
    display();
    peek();
    return 0;
}