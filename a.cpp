// C++ program to count common subsequence in two strings
#include <bits/stdc++.h>
#include<string>
using namespace std;
 

int lcs( string X, string Y, int m, int n )
{
    if (m == 0 || n == 0)
        return 0;
    if (X[m-1] == Y[n-1])
        return 1 + lcs(X, Y, m-1, n-1);
    else
        return max(lcs(X, Y, m, n-1), lcs(X, Y, m-1, n));
}
 
int main()
{
    string s;
    string t,r;
    cin>>s;
    cin>>t;
    int m = s.length();
    int n = t.length();
    int f=lcs(s,t,m,n);
    string rev = string(t.rbegin(),t.rend());
    
    int l=lcs(s,rev,m,n);
    if(f>l)
    cout << f << endl;
    else
    cout<<l<<endl;
    return 0;
}