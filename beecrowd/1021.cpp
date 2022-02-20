#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    float moneyf;
    int money;
    cin>>moneyf;
    cout<<moneyf;
    cout<<"NOTAS:"<<endl;
    int a;

    money=int(moneyf);
    a=int(money/100);
    money=money%100;
    cout<<a<<" nota(s) de R$ 100.00"<<endl;

    a=int(money/50);
    money=money%50;
    cout<<a<<" nota(s) de R$ 50.00"<<endl;

    a=int(money/20);
    money=money%20;
    cout<<a<<" nota(s) de R$ 20.00"<<endl;

    a=int(money/10);
    money=money%10;
    cout<<a<<" nota(s) de R$ 10.00"<<endl;

    a=int(money/5);
    money=money%5;
    cout<<a<<" nota(s) de R$ 5.00"<<endl;

    a=int(money/2);
    money=money%2;
    cout<<a<<" nota(s) de R$ 2.00"<<endl;
    
    a=int(money/1);

    cout<<"MOEDAS"<<endl;
    money=int(moneyf*100);
    cout<<money;
    cout<<a<<" nota(s) de R$ 1.00"<<endl;
    
    a=int(money/50);
    money=money%50;
    cout<<a<<" nota(s) de R$ 0.50"<<endl;

    a=int(money/25);
    money=money%25;
    cout<<a<<" nota(s) de R$ 0.25"<<endl;

    a=int(money/10);
    money=money%10;
    cout<<a<<" nota(s) de R$ 0.10"<<endl;

    a=int(money/5);
    money=money%5;
    cout<<a<<" nota(s) de R$ 0.05"<<endl;

    a=int(money/1);
    money=money%1;
    cout<<a<<" nota(s) de R$ 0.01"<<endl;

}