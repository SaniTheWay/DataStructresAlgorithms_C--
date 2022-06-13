// Question : Selection Sort
// Question Link : _____
// Approach: _____
// status : _____

#include <iostream>
#include <vector>
using namespace std;

void selection_sort(vector<int> &A, int n)
{
    // making a min var.
    int mn;
    for (int i = 0; i < n; i++)
    {
        mn = A[i];
        int k = i;
        for (int j = i+1; j < n; j++)
        {
            if (mn > A[j])
            {
                mn = A[j];
                k = j;
            }
        }
        swap(A[i], A[k]);
    }
}

int main()
{
    vector<int> A{5, 10, 4, 3, 88, 2, 55, 0, 1};
    int n = A.size();
    cout << n << endl;
    selection_sort(A, n);
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}