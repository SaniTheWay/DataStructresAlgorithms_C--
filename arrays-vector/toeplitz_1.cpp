// Question : Toeplitz (2D Matrix)
// Question Link : _____
// Approach: _____
// status : _____

// ?? Toeplitz matrix: elements on any diagonal from
//    top to bottom right are identical.

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int r = 2, c = 2;
    int A[r][c] = {
        // {1, 2, 3, 4},
        // {5, 1, 2, 3},
        // {6, 5, 1, 2},
        // {7, 6, 5, 1},
        // {8, 7, 6, 5}
        {1,2},
        {2,2}
        };
    int result_1 = 1, result_2 = 1;
    // left -> right
    if(r==2 && c==2)
    {
        if(A[0][0] == A[1][1])cout<<"YES";
        else cout<<"NO";
    }
    for (int i = 0; i < c - 1; i++)
    {
        int k = i;
        for (int j = 1; j < r - 1 && k < c - 1; j++)
        {
            // cout << "k+1 = " << k + 1 << " j = " << j << endl;
            // cout << A[0][i] << " - " << A[j][k+1] << endl;

            if (A[0][i] != A[j][k + 1])
            {
                result_1 = 0;
                break;
            }
            result_1 = 1;

            k = k + 1;
        }
    }
    // cout << "R1 = " << result_1 << " R2=" << result_2 << endl;

    // top -> down
    for (int i = 0; i < r - 1; i++)
    {
        int k = i;
        for (int j = 1; j < c - 1 && k < r - 1; j++)
        {
            // cout << "k+1 = " << k + 1 << " j = " << j << endl;
            // cout << A[i][0] << " - " << A[k+1][j] << endl;

            if (A[i][0] != A[k + 1][j])
            {
                result_2 = 0;
                break;
            }
            result_2 = 1;

            k = k + 1;
        }
    }
    // cout << "R1 = " << result_1 << " R2=" << result_2 << endl;
    if (result_1 & result_2)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}