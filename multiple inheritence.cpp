#include<iostream>
using namespace std;
int a,b,c;
class A{
    
    public:
    void add();
};
void A::add()

     {
    
    cout<<"enter a and b"<<endl;
    cin>>a>>b;
    c=a+b;
    cout<<"add="<<c<<endl;
     }


class B{
    
    public:
    void sub();
    void mult();
    };

    void B::sub()
    {  c=a-b;
         cout<<"sub="<<c<<endl;
    }
     void B::mult()
    {   
        c=a*b;
         cout<<"mult="<<c<<endl;
    }

class C:public A,public B{
    public:
    void devide();
    void reminder();
};
 void C::devide()
    {   
        c=a/b;
         cout<<"devide="<<c<<endl;
    }
      void C::reminder()
    {   
        c=a%b;
         cout<<"reminder="<<c<<endl;
    }
    
    
int main()
{
C s;
s.add();
s.sub();
s.mult();
s.devide();
s.reminder();
return 0;
}