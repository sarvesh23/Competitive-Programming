#include <bits/stdc++.h>
#define l1 long long int
using namespace std;
int main()
{
    l1 n;
    cin >> n;
    while (n != 1)
    {
        cout << n << " ";
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = 3 * n + 1;
        }
    }
    cout << "1";
}