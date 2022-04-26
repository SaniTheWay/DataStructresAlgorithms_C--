// Question : Maximum subarray / Kadane's Algo / Contigious Subarray
// Question Link : https://leetcode.com/problems/maximum-subarray/
//                 https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/
// Approach: 1. Kadane's Algo
//           2. Dynamic Programming + Kadane's Algo **
// status : _____

#include <iostream>
#include <vector>
using namespace std;

int CODE(vector<int> &A)
{
    // int sum = 0, max_sum = A[0];  //for partial positives + neg.
    int sum = A[0], max_sum = A[0]; // for all negetives

    // Using Kadane's Algorithm
    for (int i = 0; i < A.size(); i++)
    {
        //{-2, -3, 4, -1, -2, 1, 5, -3}

        sum += A[i];
        if (sum > max_sum)
            max_sum = sum;
        if (sum < 0)
        {
            sum = 0; // since neg. value of sum is not consider for the max_sum. will take only +ve INT.
        }
    }
    return max_sum;
}

int main()
{
    vector<int> A{-2, -3, -4, -1, -2, -1, -5, -3};
    cout << CODE(A) << "\n";
    return 0;
}