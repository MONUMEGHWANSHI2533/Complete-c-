#include<iostream>
using namespace std;
class theif
{
    private:
    string name,address;
    int num;
    public :
    void input()
    {
        name="aman";
        address="dolpur";
        num=389349349;
    }
    void output()
    {
        cout<<name<<endl;
          cout<<address<<endl;
            cout<<num<<endl;
    }
};
    class police: public theif
    {

    };
    int main()
    {
        police t;
        t.input();
        t.output();
        return 0;
    }

