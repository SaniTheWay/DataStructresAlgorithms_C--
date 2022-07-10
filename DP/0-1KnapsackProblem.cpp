// Question : 0/1 Knapsack Problem
// Question Link : _____
// Approach: _____
// status : _____

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
    int capacity = 10;
    int w[] = {1, 3, 4, 6}, n = sizeof(w) / sizeof(w[0]);
    int v[] = {20, 30, 10, 50};
    int dp[n+1][capacity+1];

    // setting the 0 capacity and 0 wt to - NULL / Zero
    for(int i = 0; i<n+1; i++)
    {
        dp[i][0] = 0;
    }
    for(int j = 0; j<capacity+1; j++)
    {
        dp[0][j] = 0;
    }
    // i = item, j = capacity
    for(int item = 1; item <= n; item++){
        for(int cap = 1; cap <= capacity; cap++)
        {
            int max_without        = dp[item-1][cap];
            int max_with           = 0; //init with 0

            if(cap >= w[item-1])
            {
                max_with = v[item-1];
                int remaining_cap    = cap - w[item-1];

                max_with            += dp[item-1][remaining_cap];
            }
            dp[item][cap] = max(max_with, max_without);
        }
    }
    cout<<"ans="<<dp[n][capacity]<<endl;

    return 0;
}