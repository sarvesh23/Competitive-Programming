#include<iostream>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    if (n <= 1)
    {   cout<<"0";
        return 0;
    }
    if (n <= 3)
    {    cout<<"1";
        return 0;
    }

    if (n % 2 == 0 || n % 3 == 0)
    {   cout<<"0";
        return 0;
    }

    for (int i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {    cout<<"0";
            return 0;
        }
    }
    cout<<"1";
}
