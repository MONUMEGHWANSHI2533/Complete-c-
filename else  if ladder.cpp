#include<iostream>
using namespace std;
int main()
{
    int a,b,ch,add,sub,mult,devide;
    cout<<"enter two number";
    cin>>a;
    cin>>b;
    cout<<"enter choice";
    cin>>ch;
    if (ch==1)
    {
     add=a+b;
     cout<<add;
    }
    else if (ch==2)
    {
     sub=a-b;
     cout<<sub;
    }
    else if (ch==3)
    {
     mult=a*b;
     cout<<mult;
    }
    else if (ch==4)
    
    {
        devide=a/b;
        cout<<devide;
    }
    else
    {
        cout<<"invalid task";
    }

    return 0;
    
    

}