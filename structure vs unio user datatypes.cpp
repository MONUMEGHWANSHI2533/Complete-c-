#include<iostream>
using namespace std;
 struct monu
 {
    int marks;
    float avg;
    double salary;
 };
 union monu1
 {
    int marks;
    float avg;
    double salary;
 };
 int main()
 {
    struct monu m;
    union monu1 m1;
    cout<<"size of m="<<sizeof(m)<<endl;
     cout<<"size of m1="<<sizeof(m1)<<endl;
     return 0;

 }

 