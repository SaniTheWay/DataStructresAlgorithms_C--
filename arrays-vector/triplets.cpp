// Question : Triplets
// Given an array of n integers and a number 'S' denoted a sum,
// Find all the distinct integers that can add upto form target sum.
// the number in each triplet should be ordered in ascending order and Triplets
// should also be in ascending order too.Return empty array of not possible.

// Question Link : https://www.geeksforgeeks.org/find-a-triplet-that-sum-to-a-given-value/
// Approach: _____
// status : https://leetcode.com/problems/3sum/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> CODE(vector<int> arr, int targetSum)
{
    // int k = 0;
    vector<vector<int>> result;
    // first we sort array:
    sort(arr.begin(), arr.end());
    int n = arr.size();
    // after taking every arr[i], we perform pair sum (not with HASHING due to TC),
    // using 2 pointers approach

    // taking two pointers
    for (int i = 0; i < n - 3; i++) // only till 'n-3' iterations
    {
        int left = i + 1;
        int right = n - 1;
        // arr[i] + pair_Sum
        while (left < right)
        {
            int currentSum = arr[i];
            currentSum += arr[left];
            currentSum += arr[right];

            if (currentSum == targetSum)
            {
                // pushing a Vector into the 'result' vector
                result.push_back({arr[i], arr[left], arr[right]});
                left++;  // shifting 'left' pointer
                right--; // shifting 'right' pointer
            }

            else if (currentSum < targetSum)
                left++; // shifting 'left' pointer only

            else
                right--; // shifting 'right' pointer only
        }
    }
    if (result.size() == 0)
    {
        cout << "No Match";
        return {};
    }
    return result;
}

int main()
{
    vector<int> V{1, 3, 4, 2, 6, 5, 7, 8, 9, 15};
    int target = 18;
    auto r = CODE(V, target);
    for (auto i : r)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}