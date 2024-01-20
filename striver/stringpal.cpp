#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int l = s.size();
    int i;
    for (i = 0; i < s.size() / 2; i++)
    {
        if (s[i] != s[l - i - 1])
        {
            cout << "Not Pallindrome";
            exit(0);
        }
    }
    if (i == l / 2)
        cout << "Pallindrome";
}