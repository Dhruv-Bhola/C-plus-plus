// Pointers to derived class

// run time polymorphism
// DEKH KAR PTA CHAL JAYEGA KI KON RUN HOGA.

#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base;
        void display(){
            cout<<"Displaying Base class variable var_base "
                <<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
        int var_derived;
        void display(){
            cout<<"Displaying Base class variable var_base "
                <<var_base<<endl;
            cout<<"Displaying Derived class variable var_derived "
                <<var_derived<<endl;
        }
};

int main(){

    // late binding : pointer jis class ka hota hai usi ka display fn run hota hai
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; // Pointing base class pointer to derived class

    base_class_pointer->var_base = 34;
    // base_class_pointer->var_derived = 134; // this will throw error bcoz base class pointer can only excess base class variables
    base_class_pointer->display();

    base_class_pointer->var_base = 3400;
    base_class_pointer->display();

    DerivedClass * derived_class_pointer;
    derived_class_pointer = &obj_derived;

    derived_class_pointer->var_base = 9448;
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->display();

    return 0;
}