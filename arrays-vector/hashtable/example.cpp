// Question : _____
// Question Link : _____
// Approach: _____
// status : _____

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// pair<int, int> CODE(vector<int> &A, int k)
// {
//     int n = A.size();
//     sort(A.begin(), A.end());
//     int l = 0, r = n - 1;
//     while (l < r)
//     {
//         // cout<<A[l] + A[r]<<" || ";
//         if (A[l] + A[r] == k)
//             return {l, r};
//         if (A[l] + A[r] < k)
//         {
//             l++;
//         }
//         else
//         {
//             r--;
//         }
//     }
//     return {};
// }

pair<int, int> CODE(vector<int> &A, int k)
{
    unordered_set<int> S;
}

int main()
{
    vector<int> A{3, 2, 4};
    auto r = CODE(A, 6);
    for (auto i : A)
        cout << i;
    cout << endl;
    cout << r.first << " " << r.second;
    return 0;
}