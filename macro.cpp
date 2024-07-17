#include<iostream>
#define num 10
#define numm(a,b) ((a>b)?a:b)
using namespace std;
int main()
{
    int i,r;
    for(i=1;i<=10;i++)
    {
        r=num*i;
        cout<<num<<"*"<<i<<"="<<r<<endl;
    

    }

cout<<numm(10,20)<<endl;

cout<<numm(35,45)<<endl;

cout<<numm(333,3333)<<endl;

cout<<numm(234,444)<<endl;

return 0;
}