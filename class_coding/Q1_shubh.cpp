#include <iostream>
using namespace std;

int duplicate(int &arr[], int num, int length)
{
    int j;
    for (j = 0; j < length; j++)
    {
        if (arr[j] == num)
        {
            cout << "Duplicate" << endl;
            return true;
        }
    }
    return false;
}

int main()
{
    int arr_size = 10;
    int arr[arr_size]={0}, flag, i, number = 0;
    int k = 0;
    for (int i = 0; i < arr_size; i++)
    {
        cout << "Enter ele:" << endl;


        if (!duplicate(arr, cin>>number, arr_size))
        {
            arr[k] = number;
            k++;
        }
    }
    cout << "Your array element without any duplicate values are" << endl;
    for (i = 0; i < arr_size; i++)
    {
        cout << arr[i] << " ";
    }
        return 0;
}