// IN MULTIPLE INHERITANCE THE CLASS WHICH IS WRITTEN FIRST CONSTRUCTOR OF THAT CLASS IS CALLED FIRST

// SIMPLE INHERITANCE:(While making obj of derived class) CONSTRUCTOR OF BASE CLASS IS CALLED FIRST

// MULTILEVEL INHERITANCE: CONSTRUCTOR ARE EXECUTED IN ORDER OF INHERITANCE(if obj is form C, A constructor then B constructor then C)

// CONSTRUCTOR OF VIRTUAL BASE CLASS IS INVOKED FIRST THAN THAT OF NON VIRTUAL BASE CLASS (VIRTUAL BASE CLASS = VIP)

// CONSTRUCTOR ORDER: BASE CLASS VIRTUAL THAN BASE CLASS NON VIRTUAL 
// IF BASE CLASS CONSTRUCTOR DOES NOT CONTAIN ANY ARGUMENTS, THERE IS NO NEED OF ANY CONSTRUCTOR IN DERIVED CLASS
// BUT IF THERE ARE ARGUMENTS IN BASE CLASS CONSTRUCTOR, DERIVED CLASS NEED TO PASS ARGUMENTS TO THE BASE CLASS CONSTRUCTOR

/* SpEcIaL SyNtAx
C++ supports an special syntax for passing arguments to multiple base classes
The constructor of the derived class receives all the arguments at once and then will pass the calls to the respective base class
The body is called after all the constructors are finished executing */

// A(a1, a2) --> B(b1, b2) --> C(c1, c2): 
// Derived-Constructor(arg1, arg2, arg3, ...): Base1-Constructor(arg1, arg2), Base2-Constructor(arg3, arg4){
//     ...
// }Base1-Constructor(arg1, arg2)

//eg. C objA(3, 7, 9, 11, 12, 22): 
//C(a1, a2, b1, b2, c1, c2): B(b1, b2), A(a1, a2){c = c1, c` = c2}

#include<iostream>
using namespace std;

class A{

};

int main(){
    
    return 0;
}