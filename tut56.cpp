// VIRTUAL FUNCTIONS:
// DUSRE VALA FN RUN HO
// POLYMORPHISM: OBJECTS JO ALAG ALAG CLASS KO BELONG KAR RHE HAI VO EK TARAH KA RESPONSE DE
// bind : fn ke address se obj ko associate karna

#include<iostream>
using namespace std;

class BaseClass{
    public:
       int var_base;
       BaseClass(){}
       BaseClass(int a){
        var_base = a;
       }
        virtual void display(){
            cout<<"1 Displaying Base class variable var_base "
                <<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
        DerivedClass(){}
        int var_derived;
        DerivedClass(int a, int b) : BaseClass(a), var_derived(b){}
        void display(){
            cout<<"2 Displaying Base class variable var_base "
                <<var_base<<endl;
            cout<<"2 Displaying Derived class variable var_derived "
                <<var_derived<<endl;
        }
};

int main(){
    BaseClass * base_class_pointer;
    BaseClass obj_base(1);
    DerivedClass obj_derived(1, 2);

    base_class_pointer = &obj_derived;
    base_class_pointer->display();
    return 0;
}