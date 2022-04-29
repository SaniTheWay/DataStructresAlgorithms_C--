// Question : Best Time to Buy and Sell Stock
// Question Link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// Approaches: Array, Dynamic Programming
//            1. Brute Force(O(n^2))
//            2. Using Space- make an auxilary arr and store the max element from back. TC- O(n) but SC- O(n)
//            3. Kadane's algorithm: Take elements and check the difference between _current element_ & the min_so_far. then store it in max_profit
// status : DONE

#include <iostream>
#include <vector>
using namespace std;

int CODE(vector<int> A){
    int min_so_far = INT8_MAX, n = A.size();
    int max_profit = 0;
    for(int i = 0; i<n; i++) //O(n)
    {
        //storing min element so far
        if(A[i] < min_so_far) min_so_far = A[i];
        //finding the profit
        //by taking the diff b/w current_element(A[i]) & min_so_far
        if(A[i]-min_so_far > max_profit){
            max_profit = A[i] - min_so_far;
        }
        if(max_profit<0)max_profit=0;
    }
    return max_profit;
}

int main(){
  vector<int> A = {7,1,5,3,6,4};
  cout<<CODE(A);

return 0;
}