#include<iostream>
using namespace std;
template <class A>
void print(A x, A y)
{
    cout<<x<<endl<<y<<endl;
}
 
int main()
{
   print(10,30);
   print("monu","sonu");
   return 0;  
}