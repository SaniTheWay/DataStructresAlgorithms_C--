#include <iostream>

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
    temp->data = num;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        struct Node *ptr;
        ptr = head;
        while (ptr->next != NULL) // checking 'ptr->next'
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}
// inserting element at 1st Position
void insert_first(int value)
{
    struct Node *temp = (struct Node *)(malloc(sizeof(struct Node *)));
    temp->data = value;
    if (head == NULL)
    {
        temp->next = NULL;
    }
    else
    {
        temp->next = head;
        head = temp;
    }
}

void insert_last(int value)
{
    create(value);
}

void insert_pos(int value, int pos)
{
    struct Node *temp = (struct Node *)(malloc(sizeof(struct Node *)));
    temp->data = value;
    if (pos == 1)
    {
        // cout<<"Inserting at Head!";
        temp->next = NULL;
    }
    else
    {
        struct Node *ptr;
        ptr = head;
        // int k = pos;
        for (int i = 1; i < pos - 1; i++)
        {
            ptr = ptr->next;
            // k--;
        }
        temp->next = ptr->next;
        ptr->next = temp;
    }
}

void display()
{
    // if no element is there
    // if present
    struct Node *temp;
    temp = head;
    if (head == NULL)
    {
        cout << "\nNo element!\n";
    }
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
    int n, m;
    cout << "No. of elemets: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter to add element: " << endl;
        cin >> m;
        create(m);
    }
    // display();
    // insert_first(78);
    insert_pos(9, 3);
    display();

    return 0;
}