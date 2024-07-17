#include<iostream>
#include<string.h>
using namespace std;
int main()

{
    char strr[]="MAYANK";
    char strr2[20];
    char strr3[]="meghwanshi";
    char strr4[]="seemar";
    char strr5[]="neerma";
cout<<"string"<<endl;
    cout<<strr<<endl;
     
      cout<<strr3<<endl;

cout<<"length "<<endl; 
    int r=strlen(strr);
    cout<<r<<endl;

cout<<"reverse"<<endl;
    strrev(strr);
    cout<<strr<<endl;

cout<<"copy"<<endl;
    strcpy(strr2,strr3);
    cout<<strr2<<endl;

 cout<<"add"<<endl;
    strcat(strr5,strr4);
    cout<<strr5<<endl; 

     cout<<"lower case"<<endl;
    strlwr(strr);
    cout<<strr<<endl;

    cout<<"upper case"<<endl;
    strupr(strr3);
    cout<<strr3<<endl;



    return 0;
}