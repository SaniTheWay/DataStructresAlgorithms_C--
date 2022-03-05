// Question : Check if a LL is Looped/Cyclic or not
// Question Link : https://www.geeksforgeeks.org/detect-loop-in-a-linked-list/

// Approach: HashMap(UNORDERED MAPS)
// status : Solved (https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1#)

#include <iostream>
#include <unordered_map>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void insertAtHead(Node *&head, int data)
{
    if (head == NULL)
    {
        head = new Node(data);
        return;
    }
}
// Complete this FUNCTION using "HASHMAP":
bool containsLoop(Node *head)
{
    unordered_map<Node *, bool> hash_table;

    // """check if the node is in the hashtable then it is loop
    //     or
    //     we can say, if the hash table already have an entry of that node then
    //     there is a loop
    // """

    Node *temp = head;

    while (temp != NULL)
    {
        if (hash_table.count(temp) == 1)
            return true;
        hash_table[temp] = true;
        temp = temp->next;
    }
    return false;
}

/* Driver program to test above function*/
int main()
{
    /* Start with the empty list */
    Node *a = NULL;

    insertAtHead(a, 1);
    insertAtHead(a, 2);
    insertAtHead(a, 7);
    insertAtHead(a, 5);
    insertAtHead(a, 6);

    /* Create a loop for testing */
    Node *temp = a->next->next->next->next;
    temp->next = a->next->next;

    if (containsLoop(a))
        cout << "Loop found";
    else
        cout << "No Loop";

    return 0;
}
