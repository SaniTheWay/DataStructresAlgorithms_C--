// Question : Circular Linkedlist

#include <iostream>
#include <vector>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
    Node()
    {
        
    }
    Node(int dt)
    {
        data = dt;
        next = NULL;
    }
};

class circular_ll : public Node
{
    Node *head = NULL;
    Node *last = NULL;

public:
    bool is_emp()
    {
        if (head == NULL)
            return 1;
        return 0;
    }

    void insert_in_emp(int value)
    {
        Node *temp = new Node(value);
        head = temp;
        temp->next = head;
        last = temp;
    }

    void insert_at_last(int value)
    {
        if (is_emp())
        {
            // if empty
            insert_in_emp(value);
        }
        else
        {
            // if not empty
            Node *temp = new Node(value);
            temp->next = head;
            last = temp;
        }
    }

    void insert_at_first(int value)
    {
        if (is_emp())
        {
            insert_in_emp(value);
        }
        else
        {
            Node *temp = new Node(value);
            temp->next = head;
            head = temp;
            last->next = head;
        }
    }

    void insert_at_pos(int pos, int value)
    {
        if (pos == 1 && is_emp())
        {
            insert_in_emp(value);
        }
        else
        {
            Node *temp = new Node(value);
            Node *ptr = head;
            while (int i = pos - 1)
            {
                ptr = ptr->next;
                i++;
            }
            temp->next = ptr->next;
            ptr->next = temp;
            delete ptr;
        }
    }

    void dis()
    {
        Node *ptr = head;
        if (is_emp())
        {
            cout << "Empty LL.\n";
        }
        else
        {
            while (ptr->next=last)
            {
                cout << ptr->data << "->";
                ptr = ptr->next;
            }
            // cout << last->data<<endl;
        }
        delete ptr;
    }
};

int main()
{
    // int value = 10;
    circular_ll obj;
    // obj.dis();
    obj.insert_at_first(10);
    obj.insert_at_last(20);
    obj.insert_at_last(30);
    obj.dis();
    return 0;
}