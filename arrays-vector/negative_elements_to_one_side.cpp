// Question : Move negative elements to one side
// Question Link : https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/
// Approach: 1. Bruite Force (Using Single Loop - with adjascent comparison)
// Approach: 2. 2-Pointer Approach
// status : _____

#include <iostream>
#include <vector>
using namespace std;

void CODE(int A[], int n)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
         if (A[l] > 0 && A[r] < 0)
        {
            swap(A[l], A[r]);
            ++l;
            --r;
        }
        else if (A[l] < 0 && A[r] < 0)
        {
            ++l;
        }
        else if (A[l] > 0 && A[r] > 0)
        {
            --r;
        }
         
        else
        {
            ++l;
            --r;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}

int main()
{
    int A[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n = sizeof(A) / sizeof(A[0]);
    CODE(A, n);

    return 0;
}