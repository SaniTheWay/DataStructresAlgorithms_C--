#include <iostream>
#include <vector>
#define n 4
#define m 5
using namespace std;
// vector<int> M(*size*, *init_value*)
vector<vector<int>> matrix(n, vector<int>(m, 0));

class Solution
{
public:
    bool isMatrixToeplitz()
    {
        int i = 0;
        int j = 0;
        int op = (n - 1) * (m - 1);

        do
        {
            while (i <= n - 2 && j <= m - 2)
            {
                if (matrix[i][j] == matrix[i + 1][j + 1])
                {
                    i++;
                    j++;
                    op--;
                }
                else
                {
                    return false;
                }
            }
            if (i > n - 2)
            {
                i = 0;
                j = j - 1;
            }
            if (j > m - 2)
            {
                j = 0;
            }
        } while (op >= 1);
        return true;
    }
    void display()
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cout << matrix[i][j];
            cout << "\n";
        }
    }
};
int main()
{
    cout << "Enter Matrix Elements:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    Solution oS;
    oS.display();
    bool res = oS.isMatrixToeplitz();
    if (res)
        cout << "\nMatrix is Toeplitz";
    else
        cout << "\nMatrix is not a Toeplitz matrix";
    return 0;
}