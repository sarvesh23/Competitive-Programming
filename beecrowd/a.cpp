#include <stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int a[2][3][2] ={{{1,2},{9,8},{3,7}},{{2,2},{1,4},{5,4}}};
    printf("%d",a[1][0]-a[0][0]);
    cout<<endl;
    printf("%d",a[1][0]);
    cout<<endl;
    
    printf("%d",a[0][0]);
    cout<<sizeof(int);

    return 0;
}