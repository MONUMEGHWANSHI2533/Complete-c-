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
{A *p;
B obj;       // run class b function by using pointer 
p=&obj;      //add virtual keyword on before class a function
p->monu();
return 0;
}