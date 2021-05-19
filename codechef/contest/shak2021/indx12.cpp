#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    
    int t;
    cin>>t;
    //vector <char> p = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    while(t--)
    {
        string s;
        cin>>s;
        int sum = 0;
        for(int i=0;i<s.size();i++)
        {   
            sum = sum + int(s[i]) - 96;
        }
        if(sum%2==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}