
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a;
    long int num,len;
    cin>>len;
    while(len--)
    {
        cin>>num;
        a.push_back(num);
    }
    reverse(a.begin(),a.end());
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";

    
}