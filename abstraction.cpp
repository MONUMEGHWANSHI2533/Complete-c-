#include<iostream>
using namespace std;
class mybank{
    private:
    int atmpin,balance;
    public:
    string ifsc,accountn;
    int anum;
    void input ()
        
    {

cout<<"enter atm pin";
cin>>atmpin;

cout<<"enter balance";
cin>>balance;

cout<<"enter ifsc";
cin>>ifsc;

cout<<"account number";
cin>>accountn;

cout<<"enter account no.";
cin>>anum;
    }
    void output()
    {
        cout<<atmpin<<endl;
        cout<<balance<<endl;
        cout<<ifsc<<endl;
        cout<<accountn<<endl;
        cout<<anum<<endl;
        
    }
};
int main()
{
    mybank m;
    m.input();
    m.output();
    

    cout<<"aekant trying to acess my account";
   // cout<<m.atmpin<<endl;
       // cout<<m.balance<<endl;
        cout<<m.ifsc<<endl;
        cout<<m.accountn<<endl;
        cout<<m.anum<<endl;
        
    return 0;
}