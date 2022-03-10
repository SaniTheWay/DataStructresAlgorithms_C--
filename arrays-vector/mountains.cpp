// Question : Highest Mountain(or Mountain)
// Question Link :
//          > https://www.geeksforgeeks.org/longest-mountain-subarray/
//          >

// Approach: Two pointer Type
// status : RTE https://leetcode.com/problems/longest-mountain-in-array/

#include <iostream>
#include <vector>
using namespace std;

// Efficient Algorithm

int longestMountain(vector<int> &V)
{
    int n = V.size(), mx = 0;
    for (int i = 1; i <= n - 2;)
    {
        // finding peek
        if (V[i - 1] < V[i] and V[i] > V[i + 1])
        {
            int left = i;
            int cnt = 1;
            // int right = i+1

            // cnt left elements till the lowest point
            while (V[left] > V[left - 1] && left >= 1)
            {
                cnt++;
                left--;
            }
            // cnt right elements till the lowest point
            while (V[i] > V[i + 1])
            {
                i++;
                cnt++;
            }
            mx = max(mx, cnt);
        }
        else
        {
            i++;
        }
    }

    return mx;
}

int main()
{
    vector<int> V{5, 6, 1, 2, 3, 4, 5, 4, 3, 2, 0, 1, 2, 3, -2, 4};
    cout << longestMountain(V);
    // Output -
    //  > 9
    return 0;
}