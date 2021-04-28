#include<iostream>
using namespace std;
int main()
{   int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {   
        if(i%2==0)
        {  int fi = i*5;
           for(int j=1;j<=5;j++)
           { cout<<fi<<" "; 
                fi--;
           }
        }
        else
        {
            int fi = (i-1)* 5 +1;
            for(int j=1;j<=5;j++)
           { cout<<fi<<" "; 
                fi++;
           }
        }
        cout<<endl;
    }
}