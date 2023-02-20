#include<iostream>
using namespace std;

// Destructor never takes an argument nor does it return any value
// Jab compiler ko pta chal gya ki object ki zarurat nhi hai tab vo destruct ho jayega

int qount = 0;

class num{
    public:
        num(){
            qount++;
            cout<<"This is the time when Constructor is called for object number "
            <<qount<<endl;
        }

        ~num(){
            cout<<"This is the time when my Donstructor is called for object number "
            <<qount<<endl;
            qount--;
            
        }
};

int main(){
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2, n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}