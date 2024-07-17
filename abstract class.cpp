#include<iostream>
using namespace std;
class animal{
    public:
   virtual void sound()=0;  //define body of virtual function always 
                            // in inherit class
   
};
class cat: public animal{
    public:
    void sound()
    {
        cout<<"meow meow"<<endl;    }
};
int main()
{
    cat c;
    c.sound();
    return 0;
}
