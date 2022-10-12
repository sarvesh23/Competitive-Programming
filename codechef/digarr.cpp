#include <iostream>
using namespace std;

int main() {
	// your code goes here 
	int t;
	cin>>t;
	while(t--)
{   
    int d;
    string n;
    cin>>d;
    cin>>n;
    int i;
    for( i=0;i<d;i++)
    {
        if(n[i]=='0'||n[i]=='5')
        {
            cout<<"YES"<<endl;
            break;
        } 
      
    } 
      if(i==d)
            cout<<"no"<<endl;
        
        
    
    
}
	return 0;
}
