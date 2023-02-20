#include<iostream>
#include<iomanip>

using namespace std;

int a = 4;

int main(){
    // int a = 34;
    // char c = '4';
    // cout<<"The value of a was: "<<a<<endl;
    // cout<<"The value of c was: "<<c<<endl;
    // a = 45;
    // c = 'c';
    // cout<<"The value of a is: "<<a<<endl;
    // cout<<"The value of c is: "<<c<<endl;

    // Constants in C++ **********

    // const int a = 3;
    // cout<<"The value of a was: "<<a<<endl;
    // a = 45; // You will get an error because a in a constant.
    // cout<<"The value of a is : "<<::a<<endl;

    // Manipulators in C++ **********

    // int a = 3, b = 78, c = 1233;
    // cout<<"The value of a without setw(4) is: "<<a<<endl;
    // cout<<"The value of b without setw(4) is: "<<b<<endl;
    // cout<<"The value of c without setw(4) is: "<<c<<endl;

    // cout<<endl;

    // cout<<"The value of a is: "<<setw(4)<<a<<endl;
    // cout<<"The value of b is: "<<setw(4)<<b<<endl;
    // cout<<"The value of c is: "<<setw(4)<<c<<endl;

    // Operator Precedence **********
    int a = 3, b = 4;
    // int c = (a*5)+b;
    int c = ((((a*5)+b)-45)+87);
    cout<<c<<endl;

    return 0;
}