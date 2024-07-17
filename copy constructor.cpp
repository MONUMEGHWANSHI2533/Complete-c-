#include<iostream>
using namespace std;
class M{
    int x,y;
    public:
M(int a,int b)
{
    x=a; y=b;
    cout<<"enter 2 number";
    cout<<x<<ends<<y<<endl;
}
M(M &ref) //copy constructor
{
    x=ref.x;
    y=ref.y;
       cout<<x<<ends<<y<<endl;
    
}
};

int main()
{
 M obj(23,65);
 M obj2=obj;
 return 0;
}