#include<iostream>
#include<vector>
#include <iomanip>
using namespace std;

int main()
{
    vector<float> arr;
    for(int i=0;i<100;i++)
    {
        float t;
        cin>>t;
        arr.push_back(t);

    }
    for(int i=0;i<100;i++)
    {
        std::cout << std::fixed;
        std::cout << std::setprecision(1);
        if (arr[i]<=10){
            cout<<"A["<<i<<"] = "<<float(arr[i])<<endl;
        }
        
    }
}