// Question : All possible substring in a String
// Question Link : https://www.geeksforgeeks.org/program-print-substrings-given-string/
// Approach: _____
// status : Easy

#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

void CODE(string s, int n)
{
    for (int i = 0; i < n; i++)
    {
        char temp[n - i + 1];
        int tempindex = 0;
        for (int j = i; j < n; j++)
        {
            temp[tempindex] = s[j];

            tempindex += 1;

            temp[tempindex] = '\0';
            cout<<temp<<endl;
        }
    }
}

int main()
{
    string S = "Sanidhya";
    int n = S.length();
    CODE(S, n);

    return 0;
}