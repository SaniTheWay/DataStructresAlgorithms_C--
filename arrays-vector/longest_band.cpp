// Question : Longest Band
// Question Link : _____
// Approach: using unordered_set( O(2N) i.e. O(N))
// status : _____

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int CODE(vector<int> V)
{
    int n = V.size();
    int lrg_band_sz = 0;
    unordered_set<int> in_S;
    // inserting elements in "unordered_set" took """TC = O(N)"""
    for (int x : V)
    {
        in_S.insert(x);
    }

    // iterate over the Array
    for (int j = 0; j < n; j++)
    {
        // if V[]-1 element is in the array i.e. V[] is not first element of the """subsequence"""
        if (in_S.find(V[j] - 1) != in_S.end())
            continue;

        // if not present in the array then it is the first element
        // then search the conseutive elements
        else
        {
            int cnt = 1;
            for (int k = V[j] + 1;; k++)
            {
                cout << V[j] << " - ";
                if (in_S.find(k) == in_S.end())
                {
                    cout << endl;
                    break;
                }
                cnt++;
                cout << cnt << " ";
            }
            lrg_band_sz = max(lrg_band_sz, cnt);
        }
    }
    return lrg_band_sz;
}

int main()
{
    vector<int> V{1, 9, 3, 0, 18, 5, 2, 4, 10, 7, 12, 6};
    cout << CODE(V) << endl;
    return 0;
}