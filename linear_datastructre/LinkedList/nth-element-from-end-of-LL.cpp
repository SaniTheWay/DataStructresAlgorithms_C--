// Question : nth element from end of the LL
// Question Link : https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1/?page=1&company[]=MAQ%20Software&sortBy=submissions#
// Approach: _____
// status : MAQ

#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

// Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
{
    // Your code here
    //   using approach - 2 : Main and Refrence pointer approach
    Node *ref = head;
    Node *main = head;
    int num = n;
    while (num >= 1)
    {
        if (ref == NULL)
            return -1;
        ref = ref->next;
        num--;
    }
    while (ref != NULL)
    {
        ref = ref->next;
        main = main->next;
    }
    return main->data;
}

int main()
{
    struct Node *head = NULL, *tail = NULL;

    cin >> n >> k;
    int firstdata;
    cin >> firstdata;
    head = new Node(firstdata);
    tail = head;
    for (int i = 1; i < n; i++)
    {
        cin >> l;
        tail->next = new Node(l);
        tail = tail->next;
    }

    cout << getNthFromLast(head, k) << endl;
    return 0;
}