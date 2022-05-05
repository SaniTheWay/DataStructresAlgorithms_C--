// Question : Minimize the Heights II
// Question Link : https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1
// Approach: Making all elements near to avg. value then after sort(), find diff.
// status : _____

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int getMinDiff(int A[], int n, int k)
{
    sort(A, A + n);
    int mx_top = A[n - 1] - A[0];
    int max_so_far = INT16_MIN;
    int min_so_far = INT16_MAX;

    for (int i = 1; i < n - 1; i++)
    {
        max_so_far = max(A[n - 1] - k, A[i] + k);
        min_so_far = min(A[0] + k, A[i - 1] - k);
        mx_top = min(mx_top, max_so_far - min_so_far);
    }

    return mx_top;
}
int main()
{
    int n = 10;
    int A[] = {4, 1, 8, 6, 2, 3, 10, 1, 6, 6};
    int k = 5;
    cout << getMinDiff(A, n, k) << endl;

    return 0;
}