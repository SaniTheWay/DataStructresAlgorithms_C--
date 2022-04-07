// Question : Queue Using Vectors
// Question Link : _____
// Approach: Array/Vectors (First in First Out - FIFO)
// status : _____
// Drawback of this Queue: "Now, actually we have deleted 2 elements from the queue so, there should be space for another 2 elements in the queue, but as the rear pointer is pointing at last position and Queue overflow condition
// (Rear == SIZE-1) is true, we can’t insert the new element in the queue even if it has an empty space."
// https://practice.geeksforgeeks.org/problems/what-are-the-drawbacks-of-simple-queues-in-data-structures

#include <iostream>
#include <vector>
using namespace std;
// defining globally
int r = -1;                 // global
int f = -1;                 // global
vector<int> my_queue(5, 0); // global

bool is_emp()
{
    if (r == -1 && f == -1)
        return 1;
    else
        return 0;
}

void q_insert(int value)
{
    if (is_emp())
    {
        cout << "EMPTY QUEUE.\n";
        my_queue.push_back(value);
        f++;
        r++;
    }
    else
    {
        my_queue.push_back(value);
        r++;
    }
}

void q_pop()
{
    if (is_emp())
    {
        cout << "Empty Queue. Nothing to PoP\n";
    }
    else
    {
        cout << "Element popped: " << my_queue[f] << endl;
        f++;
    }
}

void display_queue(vector<int> &my_queue)
{
    for (int i = f; i <= r; i++)
    {
        cout << my_queue[i] << " ";
    }
    cout << endl;
}

int main()
{
    // push
    q_insert(1);
    q_insert(10);
    q_insert(15);
    q_insert(51);

    display_queue(my_queue);

    // pop
    q_pop();

    display_queue(my_queue);

    return 0;
}