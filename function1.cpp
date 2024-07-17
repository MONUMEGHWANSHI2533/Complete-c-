#include<iostream>
#include<string.h>
using namespace std;
void fun()
{
    int a=0;
    static int  b=10;
    cout<<a<<ends<<b<<endl;
    a++;
    b++;

}
int main()
{
    fun();
     fun();
      fun();
       fun();
        fun();
         fun();
          fun();
          return 0;
}