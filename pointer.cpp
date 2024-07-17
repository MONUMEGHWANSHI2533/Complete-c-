
#include<iostream>
#include<string.h>
using namespace std;
{
    int a=10;
    int *p;
    cout<<"enter No";
    cin>>a;
    p=&a;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<"a="<<a<<endl;   
    cout<<"p="<<*p<<endl;   
    return 0;
}
