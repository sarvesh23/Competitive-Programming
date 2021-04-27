#include<iostream>
using namespace std;
int max(int a ,int b)
{   
    if(a>b)return a;
    else return b;
}
#define l1 long long
int main(){
    string s;
    cin>>s;
    int ans=1,c=0;
    char l='A';
    for(char d:s){
        if(d==l)
        {
            ++c;
            ans = max(c,ans);
        }
        else
        {
            l=d;
            c=1;
        }
        
    }
    cout<<ans;
}