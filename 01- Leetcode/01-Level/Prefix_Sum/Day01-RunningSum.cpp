// Question : Running sum of 1D Array
// Question Link : https://leetcode.com/problems/running-sum-of-1d-array/submissions/
// Approach: _____
// status : _____

#include <iostream>
#include <vector>
using namespace std;

vector<int> runningSum(vector<int> &nums)
{

    int n = nums.size();

    for (int i = 1; i < n; i++)
    {
        nums[i] += nums[i - 1];
    }
    return nums;
}

int main()
{
    int;

    return 0;
}