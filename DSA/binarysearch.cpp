#include <iostream>
using namespace std;
int binarysearch(int arr[], int l, int r, int key)
{
    int mid = (l + r) / 2;
    if (l > r)
    {
        return -1;
    }
    else
    {

        if (arr[mid] == key)
        {
            return mid;
        }
        else
        {
            if (arr[mid] > key)
            {
                return binarysearch(arr, l, mid - 1, key);
            }
            else
            {
                return binarysearch(arr, mid + 1, r, key);
            }
        }
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
    found = binarysearch(arr, 0, n, num);
    if (found == -1)
    {
        cout << "\nElement not found ";
    }
    else
    {
        cout << "\nElement found at " << found << " location";
    }
}
