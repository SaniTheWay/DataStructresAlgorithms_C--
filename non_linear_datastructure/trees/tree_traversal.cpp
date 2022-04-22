// Question : Tree Traversal
// Question Link : https://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/
// Approach: Trees
// status : _____

#include <iostream>
#include <vector>
using namespace std;

class Node
{
    int data;
    Node *left;
    Node *right;

    // tree creation started:
    Node *root = NULL;

    void new_node(int value)
    {
        Node *temp = new Node();
        Node *current;
        Node *parent;

        temp->data = value;
        temp->left = temp->right = NULL;

        // check if root present of not:
        if (root == NULL)
            root = temp;
        else
        { // iterators: from current to the parent node
            current = root;
            parent = NULL;

            while (1)
            {
                parent = current;

                if (parent->data > value)
                {
                    current = current->left;

                    //---------
                    //------
                    //---
                }
                if (parent->data < value)
                {
                    current = current->right;

                    //---------
                    //------
                    //---
                }
            }
        }
    }

    void preorder_traversal()
    {
    }
};

int main()
{
    int;

    return 0;
}