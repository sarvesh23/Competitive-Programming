#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
    stack<char> a;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(')
        {
            a.push('(');
        }
        if(s[i]==')')
        {
            if(a.top()=='(')
            {
                a.pop();
            }
        }
    }
    if(a.empty())
    {
        cout<<"correct"<<endl;
    }
    else
    {
        cout<<"incorrect"<<endl;
    }

       
}