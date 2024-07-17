#include<iostream>
using namespace std;
int main()
{
  int a,b,c;
  cout<<"start programm"<<endl;
  cout<<"enter two number"<<endl;
  cin>>a>>b;
  try{ 
    if (b==0)
    throw b;

     c=a/b;
   cout<<"result"<<c<<endl;
  }
   catch(int c)
   {
    cout<<"cant devide"<<endl;
   }
   cout<<"program ended";
   return 0;

}