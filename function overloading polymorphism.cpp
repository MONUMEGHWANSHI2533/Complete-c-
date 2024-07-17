#include<iostream>
using namespace std;
int a,b,c;
class A{
    public:
    void monu()
    {
     cout<<"a and b"<<endl;;
     cin>>a>>b;
     c=a+b;
     cout<<c<<endl;
    }
    void monu(int a, int b)
    { 
        c=a*b;
        cout<<c<<endl;
    }
};
int main()
{
    A s;
    s.monu();
    s.monu(2,5);
    return 0;
}