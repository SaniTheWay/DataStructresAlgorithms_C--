#include <iostream>
#include <unordered_map>
// #include <map>       //for map i.e. sorted order based on Keywords
using namespace std;

int main()
{
    // declaring unordered map as KEY : VALUE pair
    unordered_map<string, int> menu;

    // entering data: using hashtable with O(1) operations
    menu["dosa"] = 45;
    menu["pizza"] = 445;
    menu["coffee"] = 40;

    // searching using .count() func.
    string item;
    cin >> item;

    if (menu.count(item) == 1) // 1 for TRUE/present ||  0 for FALSE/absent
    {
        cout << item << " is present, "
             << "with cost: " << menu[item] << endl;
    }
    else
        cout << item << " is not present.";
}