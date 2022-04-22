// Question : _____
// Question Link : _____
// Approach: _____
// status : _____

#include <iostream>
#include <vector>
using namespace std;
#define n 4
class Queuee
{
private:
    int f, r, Q[n];

public:
    Queuee()
    {
        f = r = -1;
    }
    bool isemp()
    {
        if (f == -1)
            return 1;
        else
            return 0;
    }
    bool isfull()
    {
        if(f==r+1 || (f==0 && r==n-1))return 1;
        // if(f>0 && )
        return 0;
    }
    void insert(int value)
    {
        if (isemp())
        {
            cout << "Element in Empty Queue.\n";
            Q[++r] = value;
            f++;
            // cout<<Q[r]<<" \n";
        }
        else
        {
            // cout << "\tinsert" << endl;

            // r = r % n;
            if (f == 0 && r == n - 1)
            {
                // r %= n;
                cout << "Queue is full.\n";
                Q[r] = value;
                cout << Q[r] << " \n";
            }
            if (f > 0)
            {
                if (r == f - 1)
                    cout << "Queue is Full!" << endl;
                else
                {
                    r=(r+1)%n;
                    Q[r] = value;
                }
            }
        }
    }

    void dequeue()
    {
        if (isemp())
        {
            cout << "No dequeue possible." << endl;
        }
        else
        {
            cout << "element removed: " << Q[f] << endl;
            f = (f + 1) % n;
        }
    }

    void display()
    {
        if (isemp())
        {
            cout << "Is empty" << endl;
        }
        cout<<"Entering LOOP.";
        for (int i = f; i != r; i = (i + 1) % n)
        {

            cout << Q[i] << " ";
        }
        cout<<Q[r];
    }
};

int main()
{
    Queuee Q1;
    cout << "runing this:";
    Q1.dequeue();
    Q1.insert(4);
    Q1.insert(41);
    Q1.insert(42);
    Q1.insert(43);
    Q1.insert(44);

    Q1.display();

    Q1.dequeue();

    Q1.display();
    return 0;
}