// Question : Detect Loop in
// Question Link : https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1/?page=1&company[]=MAQ%20Software&sortBy=submissions
// Approach: Using additional Space (set/unorderedset)
// status : _____

#include <iostream>
#include <vector>
#include <set>
using namespace std;

bool detectLoop(Node *head)
{
    set<Node *> add; // find in set
    // your code here
    if (head == NULL)
        return 0;
    Node *node = head;
    while (node != NULL)
    {
        if (add.find(node) != add.end())
            return 1;
        add.insert(node);
        node = node->next;
    }
    return 0;
}