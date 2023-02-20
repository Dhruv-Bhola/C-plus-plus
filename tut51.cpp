// POINTERS TO OBJECTS & ARROW OPERATOR

#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<<real<<endl;
            cout<<"The imaginary part is "<<imaginary<<endl;
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
        }
};

int main(){
    // Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr = new Complex;

    // (*ptr).setData(1, 54); // ()bracket is imp bcoz . operator has high precidence than * operator

    // ARROW OPERATOR
    ptr->setData(1, 54); // -> ka matlab is pointer ko dereference karo aur ptr jis obj ko point kar rha hai uska setData run karo.

    // (*ptr).getData(); is as good as
    ptr->getData();

    // ARRAY OF OBJECTS
    Complex *ptr1 = new Complex[4];
    // (ptr1)->setData(1, 0);
    // (ptr1)->getData();
    (ptr1+0)->setData(1, 0);
    (ptr1+0)->getData();
    (ptr1+1)->setData(1, 1);
    (ptr1+1)->getData();
    (ptr1+2)->setData(1, 2);
    (ptr1+2)->getData();
    (ptr1+3)->setData(1, 3);
    (ptr1+3)->getData();


    return 0;
}