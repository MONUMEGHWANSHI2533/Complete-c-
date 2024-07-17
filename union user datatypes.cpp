#include<iostream>
using namespace std;
union mayank 
{
    int roll;
    char name[20];
    float marks;
};

    int main()
    {
        union mayank m;
        cout<<"roll no";
        cin>>m.roll;
         
          cout<<"name";
        cin>>m.name;

         cout<<"marks";
        cin>>m.marks;
         cout<<m.roll<<endl<<m.name<<endl<<m.marks;
         return 0;
         
         
    }