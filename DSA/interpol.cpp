#include <iostream>
using namespace std;
int interposearch(int arr[], int min, int max, int key)
{
    int pos;
    pos = min + (((key - arr[min]) * (max - min)) / (arr[max] - arr[min]));
    if (min > max)
    {
        return -1;
    }

    else
    {
        if (arr[pos] == key)
        {
            return pos;
        }
        else if (arr[pos] < key)
            return interposearch(arr, pos + 1, max, key);
        else
            return interposearch(arr, min, pos - 1, key);
    }
}
int main()
{
    int arr[100];
    int n, num, found = -1;
    cout << "\nEnter the number of elements \t";
    cin >> n;
    cout << "\nEnter the elements in array \t";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "\nEnter the element to search \t";
    cin >> num;
    found = interposearch(arr, 0, n, num);
    if (found == -1)
    {
        cout << "\nElement not found ";
    }
    else
    {
        cout << "\nElement found at " << found << " location";
    }
}
