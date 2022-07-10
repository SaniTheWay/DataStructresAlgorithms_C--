// Question : Find substrings that contain all vowels
// Question Link : https://www.geeksforgeeks.org/find-substrings-contain-vowels/?ref=lbp
// Approach: hashing Based
// status : _____

#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;

bool isvowel(char a)
{
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
        return 1;
    return 0;
}
void display(int j, int i, string &S)
{

    for (int k = i; k < j; k++)
    {
        cout << S[k] << " ";
    }
}
void CODE(string &S)
{
    set<char> hash;
    int start = 0;
    for (int i = 0; i < S.length(); i++)
    {
        // If current character is vowel then
        // insert into hash ,
        if (isvowel(S[i]) == true)
        {
            hash.insert(S[i]);
            // If all vowels are present in current
            // substring
            if (hash.size() == 5)
                cout << S.substr(start, i - start + 1)
                     << " ";
        }
        else
        {
            start = i + 1;
            hash.clear();
        }
    }
}

int main()
{
    string S = "aeoibsddaeiouudb";
    CODE(S);

    return 0;
}