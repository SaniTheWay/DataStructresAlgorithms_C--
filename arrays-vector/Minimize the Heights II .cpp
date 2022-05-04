// Question : Minimize the Heights II
// Question Link : https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1
// Approach: Making all elements near to avg. value then after sort(), find diff.
// status : _____

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath
using namespace std;

int getMinDiff(int A[], int n, int k)
{
    // first sort the array
    sort(A, A + n);
    // finding avg
    int avg_val = 0;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        avg_val += A[i];
    }
    avg_val = ceil(avg_val / n);
    cout << "-" << avg_val << "-" << endl;
    for (int j = 0; j < n; j++)
    {
        if (A[j] == avg_val)
        {
            continue;
        }
        if (A[j] < avg_val)
        {
            A[j] += k;
            continue;
        }
        if (A[j] > avg_val)
        {
            if (A[j] - k <= 0)
            {
                A[j] += k;
            }
            else
            {
                A[j] -= k;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    sort(A, A + n);
    return A[n - 1] - A[0];
}
int main()
{
    int n = 10;
    int A[] = {4, 1, 8, 6, 2, 3, 10, 1, 6, 6};
    int k = 5;
    cout << getMinDiff(A, n, k) << endl;

    return 0;
}