#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double a,b,c,s,ar;
    cin>>a>>b>>c;
    s = (a+b+c)/2;
    ar = sqrt(s*(s-a)*(s-b)*(s-c));
    if(ar>0)
        cout<<"YES";
    else
        cout<<"NO";
}