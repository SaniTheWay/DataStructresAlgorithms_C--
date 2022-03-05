// Question : Highest Mountain(or Mountain)
// Question Link :
//          > https://www.geeksforgeeks.org/longest-mountain-subarray/
//          > https://leetcode.com/problems/longest-mountain-in-array/

// Approach: _____
// status : _____

#include <iostream>
#include <vector>
using namespace std;

// Efficient Algorithm

int CODE(vector<int> V)
{
    int n = V.size(), mx = 0;
    if (n >= 3)
    {
        for (int i = 1; i <= n - 2;)
        {
            // finding peek
            if (V[i - 1] < V[i] && V[i] > V[i + 1])
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
                while (i <= n - 2 && V[i] > V[i + 1])
                {
                    i++;
                    cnt++;
                    // right++;
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
    return 0;
}

int main()
{
    vector<int> V{5, 6, 1, 2, 3, 4, 5, 4, 3, 2, 0, 1, 2, 3, -2, 4};
    cout << CODE(V);
    // Output -
    //  > 9
    return 0;
}