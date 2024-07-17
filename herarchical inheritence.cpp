#include<iostream>
using namespace std;
class friendd
{
    public:
    void help()
    {
        cout<<"give money";
    }
};
class ram: public friendd
{
  public:
  void helps()
 {
    cout<<" at every time "<<endl;
 } 
};
class shaym: public friendd
{
  public:
  void helpss()
 {
    cout<<"  not at every time ";
 } 
};
int main()
{
    ram r;
    shaym s;
    
     r.help(); r.helps();

     s.help(); s.helpss();
    return 0;
}
