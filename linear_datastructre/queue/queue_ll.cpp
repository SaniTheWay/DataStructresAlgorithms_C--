// Question : _____
// Question Link : _____
// Approach: _____
// status : _____

#include <iostream>
#include <vector>
using namespace std;

class q_Node
{
public:
    int data;
    q_Node *next;
};

class Queuee : public q_Node
{
    q_Node *head = NULL;

    // Queuee()
    // {
    //     cout<<"Enter value
    // }
public:
    bool is_emp()
    {
        if (head == NULL)
            return 1;
        return 0;
    }
    void insert(int value)
    {
        q_Node *temp = new q_Node();
        q_Node *ptr = head;

        temp->data = value;
        temp->next = NULL;
        if (is_emp())
        {
            head = temp;
        }
        else
        {
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = temp;
        }
    }

    void display()
    {
        q_Node *temp;
        temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << endl;
    }
    void dlt()
    {
        if (is_emp())
        {
            cout << "Queue underflow.\n";
        }
        else
        {
            q_Node *ptr = head;
            head = head->next;
            delete ptr;
            cout << "Delete!!!\n";
        }
    }
    void peek()
    {
        if(is_emp())
        {
            cout<<"Empty Queue!\n";
        }
        else
        {
            cout<<"Peek element: "<<head->data<<endl;
        }
    }
};

int main()
{
    Queuee Q1;
    Q1.insert(4);
    Q1.insert(40);
    Q1.insert(41);
    Q1.insert(42);
    Q1.display();
    Q1.dlt();
    Q1.display();
    Q1.peek();
    return 0;
}