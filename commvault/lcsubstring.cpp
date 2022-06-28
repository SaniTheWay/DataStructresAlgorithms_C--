// Question : Longest Common Substring
// Question Link : _____
// Approach: _____
// status : _____

#include <iostream>
#include <string>
#include <vector>
using namespace std;
E A B C D 0 | 1 | 2 | 3 | 4 | 5 |
    ___________
        A 1 |
    0 | 1 | 0 | 0 | 0 |
    B 2 | 0 | 0 | 2 | 0 | 0 |
    C 3 | 0 | 0 | 0 | 3 | 0 |
    D 4 | 0 | 0 | 0 | 0 | 4 |
    E 5 | 1 | 0 | 0 | 0 | 0 |

    int CODE(string S1, string S2, int n, int m)
{

    int LCS[n + 1][m + 1], result = 0;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == 0 || j == 0)
            {
                LCS[i][j] = 0;
            }
            else if (S1[i - 1] == S2[j - 1])
            {
                LCS[i][j] = LCS[i - 1][j - 1] + 1;
                result = max(result, LCS[i][j]);
            }
            else
            {
                LCS[i][j] = 0;
            }
        }
    }
    return result;
}

int main()
{
    string S1 = "ROMANINROMES";
    string S2 = "XMANBATANINROMY";
    int n = S1.length(), m = S2.length();
    cout << CODE(S1, S2, n, m);

    return 0;
}