#include <iostream>
#include <unordered_map>
using namespace std;

int CODE(int N)
{
    int B = 1;
    unordered_map<int, int> M{{2, 3}, {3, 3}, {4, 7}, {5, 5}, {6, 3}, {7, 3}, {8, 11}, {9, 9}, {10, 3}};

    if (M.count(N) != 0)
    {
        return M[N];
    }
    else
    { // for divisible by 2 but quetient is ODD.
        if (N % 2 == 0 && (N / 2) % 2 != 0)
        {
            return 3;
        }
        // for adjecent (->) to above condition
        if ((N - 1) % 2 == 0 && (N / 2) % 2 != 0)
        {
            return 3;
        }
        if (N % 4 == 0)
        {
            return M[4] + 4 * (N / 4 - 1);
        }
        return M[4] + 4 * (N / 4 - 1) - 2;
    }
}

int main()
{
    // your code goes here
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N;
        int r;
        r = CODE(N);
        cout << r << "\n";
    }
    return 0;
}
