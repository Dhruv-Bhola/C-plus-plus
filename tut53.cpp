// THIS POINTER

#include<iostream>
using namespace std;

class A{
    int a;
    public:
        // A &setData(int a){
        //     this->a = a;
        //     return *this;
        // }

        void setData(int a){
            // (*this).a = a; // a = a will give garbage value bcoz local variable is given priority 
            this->a = a;
        }

        void getData(){
            // cout<<(*this)<<endl;
            cout<<"The value of a is "<<a<<endl;
        }
};

int main(){
    // this is a keyword which is a pointer which points to the object which invokes the member function.
    A a;
    // a.setData(4).getData();
    a.setData(4);
    a.getData();

    return 0;
}