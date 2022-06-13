// Question : Quick Sort
// Question Link : _____
// Approach: Divide and Conqure
// status : _____

#include <iostream>
#include <vector>
using namespace std;

void quick(vector<int> &A, int first, int last)
{
    int low = first, high = last;
    int pivot = (A[low] + A[high]) / 2;

    while (low < high)
    {
        while (A[low] <= pivot)
        {
            low++;
        }
        while (A[high] >= pivot)
        {
            high--;
        }
        if (low < high)
        {
            swap(A[low], A[high]);
            low++;
            high--;
        }
    }

    if (first < high)
    {
        quick(A, first, high);
    }
    if (last > low)
    {
        quick(A, low, last);
    }
}

int main()
{
    vector<int> A{5, 10, 4, 3, 88, 2, 55, 0, 1};
    int n = A.size();
    int first = 0, last = n - 1;
    // int low = first, high = last;
    quick(A, first, last);
    for (auto i : A)
    {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}
