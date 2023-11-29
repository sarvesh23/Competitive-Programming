#include <iostream>
using namespace std;
void insertsort(int arr[], int n)
{
    int i, key, j;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    cout << "\nEnter the elements in sorted array \t";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
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
    insertsort(arr, n);
    return 0;
}