#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{   
    int n;
    cin>>n;
    while(n--)
    {
    string s;
    map<char , int> fh;
    map<char , int> sh;
    cin>>s;
    string rev = string(s.rbegin(),s.rend());
   
    
    int len=s.size();
    for(int i=0;i<len/2;i++)
    {
        if (fh.find(s[i]) == fh.end()) {
            fh[s[i]] = 1;
        }
        else {
            fh[s[i]]++;
        }
    }
    if(len%2==0)
        len=len/2;
    else
        len = len/2 +1;
    for(len;len<s.size();len++)
    {
        if (sh.find(s[len]) == sh.end()) {
            sh[s[len]] = 1;
        }
        else {
            sh[s[len]]++;
        }
    }
    
    if(fh==sh||s==rev)
        cout<<"YES\n";
    else 
        cout<<"NO\n";
    /*
    for (auto& it : fh) {
        cout << it.first << ' '
             << it.second << '\n';
    }
    for (auto& it : sh) {
        cout << it.first << ' '
             << it.second << '\n';
    }
    */
    }
}
