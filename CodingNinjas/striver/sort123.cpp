#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void sort123(int *arr, int n)
{
    int count0 = 0, count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
        if (arr[i] == 1)
        {
            count1++;
        }
        if (arr[i] == 2)
        {
            count2++;
        }
    }
    int i = 0;
    while (i < n)
    {
        if (count0 != 0)
        {
            arr[i++] = 0;
            count0--;
        }
        else if (count1 != 0)
        {
            arr[i++] = 1;
            count1--;
        }
        else
        {
            arr[i++] = 2;
            count2--;
        }
    }
}

int main()
{
    int arr[1000], n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort123(arr, n);
    return 0;
}