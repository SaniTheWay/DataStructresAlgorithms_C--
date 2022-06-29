// Question : _____
// Question Link : _____
// Approach: _____
// status : _____

#include <iostream>
#include <vector>
using namespace std;

int CODE(int A[])
{
    int first = A[0], not_eq_first = 0, not_eq_sec = 0, second, n = 6;
    int elements[2] = {0, 1};
    if (first == elements[0])
    {
        second = elements[1];
    }
    else
    {
        second = elements[0];
    }
    for (int i = 2; i < n; i += 2)
    {
        if (first != A[i])
            not_eq_first++;
        if (second != A[i - 1])
            not_eq_sec++;
    }
    return min(not_eq_first, not_eq_sec);
}

int main()
{
    int A[] = {0, 0, 0, 1, 1, 1};
    cout << CODE(A) << endl;

    return 0;
}