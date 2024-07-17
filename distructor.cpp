#include<iostream>
using namespace std;
int count=0;
class M{
    public:
    
M()
{
    cout<<"monu"<<++count<<"created"<<endl;
}
~M(){
cout<<"monu"<<count--<<"delete"<<endl;
}
};
int main()
{
 M obj,obj3,obj4;
 return 0;
}