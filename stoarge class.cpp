#include<iostream>
#include<conio.h>

using namespace std;
int a;
int main()
  //extern(global)
 
 

{
   int b;  //aut0(local)
  static int c; //static 
  register int d; //register
  cout<<a<<endl; 
  
  cout<<b<<endl;
  cout<<c<<endl;
  cout<<d<<endl;
return 0;
}