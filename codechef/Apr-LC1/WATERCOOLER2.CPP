#include <iostream>
using namespace std;

int CODE(int X, int Y)
{
    
    int result = Y / X;
    int r = Y % X;
    if (X > Y)
        return 0;
    if (X == Y)
        return 0;
    if (r == 0)return result - 1;
    return result;
}

int main()
{
    // your code goes here
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {

        int X, Y;
        cin >> X >> Y;
        int r;
        r = CODE(X, Y);
        cout << r << "\n";
    }
    return 0;
}
