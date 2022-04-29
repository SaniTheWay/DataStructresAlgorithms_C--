#include<iostream>
using namespace std;
typedef struct node{
    int data;
    node *next;
}node;

node *first = NULL;
node *last = NULL;

void insert_at_end(int value){
    node *temp;
    temp = new node;
    if(temp == NULL){
        cout<<"Memory Error"<<endl;
    }
    else{
        temp->data = value;
        if(first == NULL){
            first = temp;
            temp->next = first;
            last = temp;
        }
        else{
            temp->next = first;
            last->next = temp;
            last = temp;
        }
    }
    delete temp;
}
void insert_at_beginning(int value){
    node *temp;
    temp = new node;
    if(temp == NULL){
        cout<<"Memory Error"<<endl;
    }
    else{
        temp->data = value;
        if(first == NULL){
            first = temp;
            temp->next = first;
            last = temp;
        }
        else{
            last->next = temp;
            temp->next = first;
            first = temp;
        }
    }
    delete temp;
}
void dis()
{
    node *ptr = first;
    if (first == NULL)
    {
        cout << "Empty LL.\n";
    }
    else
    {
        while (ptr != last)
        {
            cout << ptr->data << "->";
            ptr = ptr->next;
        }
        cout << last->data<<endl;
    }
    delete ptr;
}
int main()
{
    cout<<"Linked List before insertion: "<<endl;
    dis();
    insert_at_end(5);
    insert_at_end(10);
    insert_at_end(15);
    insert_at_end(50);
    insert_at_end(52);
    insert_at_beginning(12);
    // insert_at_beginning(100);

    cout<<"Linked List after insertions: "<<endl;
    dis();
    return 0;
}