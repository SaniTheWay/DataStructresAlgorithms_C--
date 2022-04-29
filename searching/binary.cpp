// Question : _____
// Question Link : _____
// Approach: _____
// status : _____

#include <iostream>
#include <vector>
using namespace std;
#define k 99
int CODE(int A[], int l, int r, int mid)
{
    if (l > r)
    {
        cout << "Not Present!";
        return 0;
    }
    if (A[mid] == k)
    {
        cout << "At position: " << mid << endl;
        return A[mid];
    }
    if (A[mid] > k)
    {
        r = mid - 1;
        mid = (l + r) / 2;
        return CODE(A, l, r, mid);
    }
    else {
        l = mid + 1;
        mid = (l + r) / 2;
        return CODE(A, l, r, mid);
    }
}

int main()
{
    int A[] = {2, 55, 88, 99, 100, 105, 898, 999, 1000};
    int n = sizeof(A) / sizeof(A[0]), i = 0;
    int l = 0, r = n - 1, mid = (l + r) / 2;

    CODE(A, l, r, mid);

    return 0;
}