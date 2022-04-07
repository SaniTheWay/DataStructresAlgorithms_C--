// Question : Space 20 (remove spaces with "%20")
// Question Link : _____
// Approach: 1. at each space, shift each element and insert "%20"
//          2. first get total no. of elements to be added, then shift each index+no.of_Elements
// status : _____

#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

void Space20(char *s)
{
    // finding spaces:
    // int index = s.find()
    int space = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ')
            space++;
    }
    if (space != 0)
    {
        space = space * 2;
        int i = strlen(s) + space;
        s[i] = '\0';
        for (i - 1; i >= 0; i--)
        {
            if (s[i] != ' ')
            {
                s[i + space] = s[i];
            }
            else if (s[i] == ' ')
            {
                s[i + space] = '0';
                s[i + space - 1] = '2';
                s[i + space - 2] = '%';
                space = space - 3 + 1;
            }
        }
    }
}

int main()
{
    char stringg[10000];
    cin.getline(stringg, 10000);
    Space20(stringg);
    cout << endl;
    cout << stringg;

    return 0;
}