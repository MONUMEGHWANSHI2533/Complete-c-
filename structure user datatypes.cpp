#include<iostream>
using namespace std;
struct mayank 
{
    int roll;
    char name[20];
    float marks;
};

    int main()
    {
        struct mayank m;
        cout<<"roll no";
        cin>>m.roll;
         
          cout<<"name";
        cin>>m.name;

         cout<<"marks";
        cin>>m.marks;
         cout<<m.roll<<endl<<m.name<<endl<<m.marks;
         return 0;
         
         
    }

