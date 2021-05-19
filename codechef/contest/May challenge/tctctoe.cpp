#include<iostream>
#include<vector>
using namespace std;
int main()
{   
    long int test;
    cin>>test;
    while(test--)
    {
        vector<vector<char>> t;
        int countx=0,counto=0,winx=0,win0=0,countd=0;
        for(int i=0;i<3;i++)
        {
            vector<char> r;
            for(int j=0;j<3;j++)
            {
                char s;
                cin>>s;
                r.push_back(s);
            }
            t.push_back(r);
        }
        
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(t[i][j]=='X')
                    countx++;
                if(t[i][j]=='O')
                    counto++;
                if(t[i][j]=='_')
                    countd++;
            }
        }
 

        if(t[0][0]=='X'&&t[0][1]=='X'&&t[0][2]=='X')
            winx = 1;
        if(t[1][0]=='X'&&t[1][1]=='X'&&t[1][2]=='X')
            winx = 1;
        if(t[2][0]=='X'&&t[2][1]=='X'&&t[2][2]=='X')
            winx = 1;
        if(t[0][0]=='X'&&t[1][0]=='X'&&t[2][0]=='X')
            winx = 1;
        if(t[0][1]=='X'&&t[1][1]=='X'&&t[2][1]=='X')
            winx = 1;
        if(t[0][2]=='X'&&t[1][2]=='X'&&t[2][2]=='X')
            winx = 1;
        if(t[0][0]=='X'&&t[1][1]=='X'&&t[2][2]=='X')
            winx = 1;
         if(t[0][2]=='X'&&t[1][1]=='X'&&t[2][0]=='X')
            winx = 1;

        if(t[0][0]=='O'&&t[0][1]=='O'&&t[0][2]=='O')
            win0 = 1;
        if(t[1][0]=='O'&&t[1][1]=='O'&&t[1][2]=='O')
            win0 = 1;
        if(t[2][0]=='O'&&t[2][1]=='O'&&t[2][2]=='O')
            win0 = 1;
        if(t[0][0]=='O'&&t[1][0]=='O'&&t[2][0]=='O')
            win0 = 1;
        if(t[0][1]=='O'&&t[1][1]=='O'&&t[2][1]=='O')
            win0 = 1;
        if(t[0][2]=='O'&&t[1][2]=='O'&&t[2][2]=='O')
            win0 = 1;
        if(t[0][0]=='O'&&t[1][1]=='O'&&t[2][2]=='O')
            win0 = 1;
         if(t[0][2]=='O'&&t[1][1]=='O'&&t[2][0]=='O')
            win0 = 1;

        if((winx == 1 && win0 ==1)|| ((countx-counto)<0) ||((countx-counto)>1))
            cout<<"3"<<endl;
        else if(winx==0 && win0==0 && countd==9)
            cout<<"2"<<endl;
        else if(winx==1 && win0==0 && countx>counto)
            cout<<"1"<<endl;
        else if(winx==0 && win0==1 && countx==counto)
            cout<<"1"<<endl;
        else if(winx==0 && win0==0 && countd==0)
            cout<<"1"<<endl;
        else if(winx==0 && win0==0 && countd>0)
            cout<<"2"<<endl;
        else    
            cout<<"3"<<endl;
    }
}