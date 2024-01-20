#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l;
    cin >> l;
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < l; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
