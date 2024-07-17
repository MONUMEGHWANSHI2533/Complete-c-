#include<iostream>
using namespace std;
class A{
    protected:
    int a,b,c;
    public:
    void add()
    {
    
    cout<<" a and b"<<endl;
    cin>>a>>b;
    c=a+b;
    }

};
class B:public A{
    protected:
    int d;
    public:
    void sub(){

        d=a-b;}



};
class C:public B{
    protected:
    int e;
    public:
    void mult()
    {
        e=a*b;
         cout<<"add"<<c<<endl;
        cout<<"sub"<<d<<endl;
        cout<<"mult"<<e<<endl;
    
    }
};
int main()
{
C s;
s.add();
s.sub();
s.mult();
return 0;
}