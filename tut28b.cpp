#include<iostream>
using namespace std;

class c2;
class c1{
    int val1;
    public:
        void indata(int a){
            val1 = a;
        }
        void display(void){
            cout<<val1<<endl;
        }
    friend void exchange(c1 &, c2 &);
};

class c2{
    int val2;
    public:
        void indata(int a){
            val2 = a;
        }
        void display(void){
            cout<<val2<<endl;
        }
    friend void exchange(c1 &, c2 &);
};
/*
Trick to swap 2 numbers a and b:
temp = a;
a = b;
b = temp;

*/
void exchange(c1 &x, c2 &y){
    int  tmp = x.val1;
      x.val1 = y.val2;
      y.val2 = tmp;
}

int main(){
    c1 oc1;
    oc1.indata(34);
    oc1.display();

    c2 oc2;
    oc2.indata(67);
    oc2.display();

    exchange(oc1, oc2);
    cout<<"The Value of oc1 after exchanging becomes: ";
    oc1.display();

    cout<<"The Value of oc2 after exchanging becomes: ";
    oc2.display();

    return 0;
}