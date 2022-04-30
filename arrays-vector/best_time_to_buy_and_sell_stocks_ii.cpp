// Question : _____
// Question Link : _____
// Approach: _____
// status : _____

#include <iostream>
#include <vector>
using namespace std;

int CODE(vector<int> &prices){
    int min_current = INT8_MAX, max_profit =0, n = prices.size();
        for(int i=0; i<n-1; i++)
        {
            if(prices[i] < prices[i+1])
            {
                max_profit = max_profit+(prices[i+1]-prices[i]);
            }
        }
        return max_profit;
}

int main(){
//   vector<int> prices = {7,1,5,3,6,4} ;
  vector<int> prices = {1,2,3,4,5} ;

  cout<<CODE(prices);


return 0;
}