#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s;
    vector<char> t;
    cin>>s;
    long int len = s.size();
    for(long int i=0;i<len;i++)
    {   
        if(s[i]=='R')
            reverse(t.begin(),t.end());
        else
        {
            t.push_back(s[i]);
           
        }
            
    }
    len = t.size();
    long int i=-1;
    while(i<len-1)
    {   i++;
        if(t[i]==t[i+1])
        {   
            t.erase(t.begin()+i,t.begin()+i+2);
            i=i-2;
            if(i<-1)
                i=-1;
            len=t.size();
        }
        
    }
    len = t.size();
    for(long int i=0;i<len;i++)
    {
        cout<<t[i];
    }
    
}