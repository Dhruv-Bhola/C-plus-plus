//There are two types of header files:
// 1. System header files: It comes with the compiler.
#include<iostream>
// 2. User defined header files: It is written by the programmer.
//#include "this.h" --> This will produce an error if this.h is not present in the current directory.

using namespace std;

int main (){
    int a=4, b=5;
    cout<<"Header files , Operators in C++\n";
    cout<<"Following are the types of operators in C++\n";
    cout<<endl;

    // Arithmetic operators
    cout<<"Following are the Arithmetic operators in C++\n";
    cout<<"The value of a + b is "<<(a+b)<<endl;
    cout<<"The value of a - b is "<<(a-b)<<endl;
    cout<<"The value of a * b is "<<(a*b)<<endl;
    cout<<"The value of a / b is "<<(a/b)<<endl;
    cout<<"The value of a % b is "<<(a%b)<<endl;
    cout<<"The value of  a++  is "<<(a++)<<endl;
    cout<<"The value of  a--  is "<<(a--)<<endl;
    cout<<"The value of  ++a  is "<<(++a)<<endl;
    cout<<"The value of  --a  is "<<(--a)<<endl;
    cout<<endl;

    // Assignment operators --> used to assign values to variables
    // int a =3, b =9;
    // char d ='d';

    // Comparison operators --> compare variables
    cout<<"Following are the Comparison operators in C++\n";
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of  a < b is "<<(a <b)<<endl;
    cout<<"The value of  a > b is "<<(a >b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<endl;

    // Logical operators --> compare variables
    cout<<"Following are the Logical operators in C++\n";
    cout<<"The value of this logical and operator ((a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl;
    cout<<"The value of this logical or  operator ((a==b) || (a<b)) is: "<<((a==b) || (a<b))<<endl;
    cout<<"The value of this logical not operator         (!(a==b)) is: "<<(!(a==b))<<endl;
    return 0;
}