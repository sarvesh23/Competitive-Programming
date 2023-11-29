#include <iostream>
using namespace std;
int binarysearch(int arr[], int min, int max, int key)
{
    int mid = (min + max) / 2;
    if (min > max)
        return -1;
    else
    {
        if (arr[mid] == key)
            return mid + 1;
        else
        {
            if (arr[mid] > key)
            {
                max = mid - 1;
                return binarysearch(arr, min, max, key);
            }
            else
            {
                min = mid + 1;
                return binarysearch(arr, min, max, key);
            }
        }
    }
}
int expsearch(int arr[], int n, int key)
{
    if (arr[0] == key)
        return 0;
    int i = 1;
    while (i < n && arr[i] < key)
    {
        i = i * 2;
    }
    if (i < n - 1)
        return binarysearch(arr, i / 2, i, key);
    else
        return binarysearch(arr, i / 2, n - 1, key);
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
    found = expsearch(arr, n, num);
    if (found == -1)
    {
        cout << "\nElement not found ";
    }
    else
    {
        cout << "\nElement found at " << found << " location";
    }
}