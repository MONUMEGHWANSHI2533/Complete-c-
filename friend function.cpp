#include<iostream>
using namespace std;
class monu
{
    private:
    string tv;
    public:
    void show()
    {
        tv="going to";
    }
    friend void sonu(monu r);

};
void sonu(monu r )
{
    cout<<"monu"<<r.tv;
}
int main()

{
  monu a;
  a.show();
  sonu(a);
  return 0;
}