// Question : Move negative elements to one side
// Question Link : https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/
// Approach: 1. Bruite Force (Using Single Loop - with adjascent comparison)
// status : _____

#include <iostream>
#include <vector>
using namespace std;

int CODE(int A[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if(A[i])
    }
}

int main()
{
    int A[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n = sizeof(A) / sizeof(A[0]);
    cout << CODE(A, n);

    return 0;
}