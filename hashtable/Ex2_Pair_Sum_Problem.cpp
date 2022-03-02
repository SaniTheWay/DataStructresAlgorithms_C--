// Question : Pair Sum Probelm - finding all pairs of sum k
// Question Link : https://www.geeksforgeeks.org/given-an-array-a-and-a-number-x-check-for-pair-in-a-with-sum-as-x/
// Approach: 1. Brute Force,
//           2. Sorting+2Pointer,
//           3. Sorting+BinarySearch,
//         * 4. Hashing - using 'unordered_set'
// status : Solved(approach-4) https://practice.geeksforgeeks.org/problems/key-pair5616/1/

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> CODE(vector<int> arr, int x)
{
    vector<int> r;
    unordered_set<int> S;
    int n = arr.size();
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        k = x - arr[i];
        if (S.find(k) != S.end())
        {
            r.push_back(arr[i]);
            r.push_back(k);
        }
        S.insert(arr[i]);
    }
    return r;
}

int main()
{
    vector<int> V{10, 5, 2, 3, -6, 9, 11, 2};
    int k = 4;
    vector<int> r = CODE(V, k);
    for (int i = 0; i < r.size() - 1; i += 2)
    {
        cout << r[i] << "-" << r[i + 1] << endl;
    }
    return 0;
}