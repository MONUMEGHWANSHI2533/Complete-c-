#include<iostream>
using namespace std;
class tonu;
class monu   
{
private :
int a;
public: 
void ihave()
{


    int a=10;
}
friend void sonu(monu p1,tonu p2);  
};
class tonu
{
private :
int b ;
public:
void ihave()
{


    int b=10;
}
friend void sonu(monu p1  ,tonu p2);
};
 void sonu (monu p1,tonu p2)
 {
    int c;
    c=p1.a+p2.b;
    cout<<"monu"<<c;
 }
 int main(){

    monu a;
    a.ihave();
    tonu a1;
    a1.ihave();
    sonu(a,a1);
    return 0;
 }
    