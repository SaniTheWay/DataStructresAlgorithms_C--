// Question : Insertion Sort
// Question Link : _____
// Approach: _____
// status : _____

#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector<int> &A, int n)
{
    // considering 1st element at correct place
    for (int i = 1; i < n; i++)
    {
        // current element
        int temp = A[i];
        // the previous element
        int j = i - 1;
        // comparing current (i) to the previous ones
        while (A[j] > temp && j >= 0)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = temp;
    }
}

int main()
{
    vector<int> A{5, 10, 4, 3, 88, 2, 55, 0, 1};
    int n = A.size();
    cout<<n<<endl;
    insertion_sort(A, n);
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}