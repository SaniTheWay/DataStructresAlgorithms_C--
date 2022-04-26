// Question : _____
// Question Link : _____
// Approach: _____
// status : _____

#include <iostream>
#include <vector>
#include <set>
using namespace std;

void CODE(vector<int> &A)
{
    set<int> S;
    int value, N;
    cout << "Enter no. of Elements: ";
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cout << "Enter Element: ";
        cin >> value;
        S.insert(value);
    }
    // int A[S.size()];
    set<int>::iterator it;
    for (it = S.begin(); it != S.end(); ++it)
    {
        int ans = *it;
        A.push_back(ans);
    }
}

int main()
{
    vector<int> A;

    CODE(A);
    cout << "Stored Elements are: " for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << ", ";
    }
    cout << endl;
    return 0;
}