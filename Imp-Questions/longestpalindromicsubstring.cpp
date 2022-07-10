// Question : longest palindromic substring
// Question Link : _____
// Approach: _____
// status : _____

#include <iostream>
#include <vector>
using namespace std;

class Node{
    int data;
    Node* next;
}
Node* head = NULL;
void insert(int value)
{
    Node *temp = new Node;
    temp->data = value;
    
    if(isemp()){
        head = temp;
    }
    Node *ptr = new Node;
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;

    delete ptr;

}
void display()
{
    Node *ptr = new Node;
    while(ptr!=NULL)
    {
        cout<<ptr->data;
        ptr = ptr->next;
    }
}

int CODE()
{
}

int main()
{
    int;

    return 0;
}