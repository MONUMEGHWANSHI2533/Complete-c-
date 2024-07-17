#include<iostream>
using namespace std;
class a{
    int p,q;
    public:
    void input()
    {
        int p1=10;
        int q=35;
    }
    friend class b;
};
class b{
    int c;

    public:
    void add(a r)
    {
        c=r.p+r.q;
        cout<<c;
    }

};
int main(){
     a s;
     s.input();
     b obj;
     obj.add(s  );
     return 0;
}