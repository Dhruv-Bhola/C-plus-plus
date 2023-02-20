#include<iostream>
using namespace std;
//  FUNCTIONS *******


// IMP Function prototype: fn main ki takash me aata hai ;agar function baad me likh de to work nhi karega
// type function-name (arguments);

// int sum(int a, b); //--> Not Acceptable
// int sum(int a, int b); //--> Acceptable
int sum(int,int); //--> Acceptable
// void g(void); //--> Acceptable
void g(); //--> Acceptable

int main(){
    int num1, num2;
    cout<<"Enter first number: "<<endl;
    cin>>num1;
    cout<<"Enter second number: "<<endl;
    cin>>num2;
    // num1 and num2 are *actual parameters*
    cout<<"The sum is: "<<(num1 + num2)<<endl;
    cout<<"The sum is: "<<sum(num1, num2);
    g();
     return 0;
}
    int sum(int a, int b){
    //*Formal Parameters* = Only used in functions = a and b will be taking values from actual parameters num1 and num2
        int c = a + b;
        return c;
}

void g(){
    cout<<"\nHello, Good Morning"<<endl;
}