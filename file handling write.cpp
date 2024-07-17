#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream newfile("C:\\Users\\hp\\OneDrive\\Desktop\\cpp.txt");
    cout<<"file created";
    newfile<<"monu meghwanshi";
    newfile.close();
    return 0;

}