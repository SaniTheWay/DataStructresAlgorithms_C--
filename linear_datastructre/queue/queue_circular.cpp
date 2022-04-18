// Question : _____
// Question Link : _____
// Approach: _____
// status : _____

#include <iostream>
#include <vector>
using namespace std;
#define n 4
int Q[n];
class Queuee
{
private:
    int f, r;

public:
    Queuee()
    {
        f = r = -1;
    }
    void isemp()
    {
        if (f == -1)
            return 1;
        else
            return 0;
    }
    void insert(int value)
    {
        if (isemp)
        {
            Q[++r] = value;
            f++;
        }
        else
        {
            // r = r % n;
            if (f == 0)
            {
                r %= n;
                Q[r] == value;
            }
            if (f > 0)
            {
                if (r == f - 1)
                    cout << "Queue is Full!" << endl;
                else
                {
                    Q[r] = value;
                }
            }
        }
    }
};

int main()
{
    int;

    return 0;
}