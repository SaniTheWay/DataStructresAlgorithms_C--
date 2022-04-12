// Question : _____
// Question Link : _____
// Approach: _____
// status : _____

#include <iostream>
#include <vector>
using namespace std;

void TOH(int n, char A, char B, char C)
{
    if (n < 1)
        cout << "Nothing there.";
    else if (n == 1)
        cout << A << "->" << B << ", ";
    else
    {
        TOH(n - 1, A, C, B);
        TOH(1, A, B, C);
        TOH(n - 1, B, A, C);
    }
}

int main()
{
    char A, B, C;
    int n; // no. of disks
    cin >> n;
    TOH(n, 'A', 'B', 'C');
    return 0;
}