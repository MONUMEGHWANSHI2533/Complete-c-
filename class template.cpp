#include<iostream>
using namespace std;
template <class A>
class print{
    public:
    print(A x,A y)
    {
        cout<<x<<endl<<y<<endl;
    }
    };
    int main()
    {
    
        print <string> obj("monu","sonu");
        return 0;
    }
