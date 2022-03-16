// Question : Subarray Sort
// Question Link :
// Approach: _____
// status : _____

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool is_outofOrder(vector<int> arr, int i)
{
    int x = arr[i];
    if (i == 0) // corner case : 1 -> i = 0
    {
        return x > arr[1];
    }

    if (i == arr.size() - 1) // corner case : 2 -> i = n-1
    {
        return x < arr[i - 1];
    }

    return x > arr[i + 1] || x < arr[i - 1]; // previous element is greater than or nxt element is smaller than the current element
}

pair<int, int> CODE(vector<int> arr)
{
    int n = arr.size();
    // brute force TC = O(N*logN)
    // 1. sort array, 2. check the difference on iteration
    // better:
    // check the adjascent elements of current element
    //  i.e. a[i-1] < a[i] < a[i+1]
    int smallest = INT8_MAX, largest = INT8_MIN; // smallest and Largest of the OutofOrderArray
    for (int i = 0; i < n; i++)
    {
        // finding smallest and largest element in the array(of outofOrderArrar)
        if (is_outofOrder(arr, i))
        {
            smallest = min(arr[i], smallest);
            largest = max(arr[i], largest);
        }
    }

    if (smallest == INT8_MAX)
    {
        return {-1, -1};
    }
    // checking where the elements(sm & lrg) actually belongs
    int left = 0, right = n - 1;
    while (smallest >= arr[left])
    {
        left++;
    }
    while (largest <= arr[right])
    {
        right--;
    }
    return {left, right};
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 8, 7, 6, 9, 10, 11};

    auto r = CODE(arr);
    cout << r.first << " , " << r.second << endl;
    return 0;
}