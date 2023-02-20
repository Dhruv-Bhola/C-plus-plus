#include<iostream>
using namespace std;

class Base{
    protected: // It is a private member which can be inherited.
        int a;
    private:
        int b;
    public:
        int c;
};
/*
For a protected member:
                        Public Derivation   Private Derivation  Protected Derivation
    1. Private members      Not Inherited   Not Inherited       Not Inherited       
    2. Protected members    Protected       Private             Protected
    3. Public members       Public          Private             Protected
*/
class Derived: protected Base{

};

int main(){
    Base b;
    Derived d;
    // cout<<b.a; //Bcoz a is protected, It can't be printed but be inherited
    // cout<<d.a;
    cout<<b.c;
    return 0;
}