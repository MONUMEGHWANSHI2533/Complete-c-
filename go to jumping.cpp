#include<iostream>
using namespace std;
int main()

{
    int age;
    cout<<"enter your age";
    cin>>age;
    if(age>=18)
    goto vote;
   else 
   goto notvote;

  vote:
      cout<<"eligible for vote";
      return 0;
   notvote:
   cout<<"not eligible for vote";
   
   return 0;

}