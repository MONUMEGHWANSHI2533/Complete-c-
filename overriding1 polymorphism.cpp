#include<iostream>
using namespace std;
class A{
    public :
    void monu(){
        cout<<"how are you";
    }
};
class B:public A{
    public:
    void monu()
    {
        cout<<"fine";
    }
};
int main()
{B b;
b.monu();
return 0;
}