// Question : Rains or Trapping Rain Water (HARD)
// Question Link : https://www.geeksforgeeks.org/trapping-rain-water/
// Approach: 2 Array Approach with TC O(N)
// status : https://leetcode.com/problems/trapping-rain-water/submissions/

#include <iostream>
#include <vector>
using namespace std;

int CODE(vector<int> heights)
{
    int n = heights.size();
    int L[n], R[n], L_mx = 0, R_mx = 0, j = n - 1;

    // corner case:
    if (n <= 2)
    {
        return 0;
    }

    // making a Left and Right max's array for finding the max from both sides
    // L = [0,1,1,2,2,2,2,3,3,3,3,3]     --->>>
    // R = [3,3,3,3,3,3,3,3,2,2,2,1]     <<<---

    for (int i = 0; i < n; i++)
    {
        L_mx = max(L_mx, heights[i]);
        L[i] = L_mx;
        R_mx = max(R_mx, heights[n - i - 1]);
        R[n - i - 1] = R_mx;
    }

    int water = 0;

    for (int j = 0; j < n; j++)
    {
        water += min(L[j], R[j]) - heights[j]; // total water = min of (Lmax[], Rmax[]) - current block height
        // cout << water << " ";
    }
    // L = [0,1,1,2,2,2,2,3,3,3,3,3]     --->>>
    // R = [3,3,3,3,3,3,3,3,2,2,2,1]     <<<---
    // W = [0,0,1,1,2,4,5,5,5,6,6,6]
    return water;
}

int main()
{
    vector<int> water{0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << CODE(water) << "\n";

    return 0;
}