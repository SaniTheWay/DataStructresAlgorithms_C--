// Question : Merge Sort
// Question Link : https://leetcode.com/problems/sort-an-array/
// Approach: Divide and Conquer
// status : _____

#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &A, int l, int r)
{
    int i = l,  m = (l + r) / 2, j = m+1;
    // int n = sizeof(A)/sizeof(A[0]);
    vector<int> temp;

    while (i <= m and j <= r)
    {
        if(A[i] < A[j])
        {
            temp.push_back(A[i]);
            i++;
        }
        else
        {
            temp.push_back(A[j]);
            j++;
        }
    }

    // copy remaining elements from first list:
    while (i <= m)
    {
        temp.push_back(A[i++]);
    }

    while (j <= r)
    {
        temp.push_back(A[j++]);
    }
    int k = 0;
    // copy elements in real array:
    for (int i = l; i <= r; i++)
    {
        A[i] = temp[k++];
    }
    return;
}

void merge_sort(vector<int> &A, int l, int r)
{
    if (l >= r)
    {
        return;
    }
    int m = (l + r) / 2;
    // left-child
    merge_sort(A, l, m);
    // right-child
    merge_sort(A, m + 1, r);
    return merge(A, l, r);
}

int main()
{
    int n, value;
    cin >> n;
    vector<int> A;
    for (int i = 0; i<n; i++)
    {
        cin>>value;
        A.push_back(value);
    }
    int l = 0, r = n - 1;
    int m = (l+r)/2;
    // merge_sort(A, left, mid, right)
    merge_sort(A, l, r);
    for (auto i : A)
    {
        cout << i << ", ";
    }
    return 0;
}