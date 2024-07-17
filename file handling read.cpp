#include<iostream>
#include<fstream>
using namespace std;
int main()
{  string str;
    ifstream newfile("C:\\Users\\hp\\OneDrive\\Desktop\\cpp.txt");
    cout<<"file created";
    while (getline(newfile,str))
    cout<<str<<endl;
    newfile.close();
    return 0;

}