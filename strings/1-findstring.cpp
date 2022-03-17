// Question : Find String
// Question Link : https://www.udemy.com/course/cpp-data-structures-algorithms-levelup-prateek-narang/learn/quiz/5226266#announcements
// Approach: using "s.find()"
// status : _____

#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> stringSearch(string big, string small)
{

    vector<int> result;
    int index = big.find(small);
    while (index != -1)
    {
        result.push_back(index);
        index = big.find(small, index + 1);
    }

    return result;
}

int main()
{
    string big = {"My sani, if this is sani then who is mani pani and also sani dani"};
    string small = {"sani"};
    for (int x : stringSearch(big, small))
    {
        cout << x << " ";
    }

    return 0;
}