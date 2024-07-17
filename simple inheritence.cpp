#include<iostream>
using namespace std;
class dad{
    protected:
    int amount;
    public:
    void input()
    {
        amount=100000;

    }
    void output()
    { 
        cout<<amount<<endl;
    }

};
class son:public dad{ 

    public:
    void show(){
     int mymoney=12454;
    
        cout<<mymoney<<endl;}
        
};
int main()
{
    son s;
    s.input();
    s.output();
    s.show();
    return 0;
}