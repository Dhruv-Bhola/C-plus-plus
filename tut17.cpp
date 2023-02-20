#include<iostream>
using namespace std;

//***** inline functions: spance and time complexity , small time ko bachata hai , arguments ko copy nhi karta functions me 
// jab function ke andar na ke barabar kam ho rha hai to usko inline function me badalna hai
//recursion me use nhi karne , static variables me use nhi karne bcoz jab fn run hota hai to vo execute hone ke baad bhul jata hai arguments ko but static variable ni bhulna chaiye nhi to fn disturb ho jayega ,loops me nhi karna 

inline int product(int a, int b){ // inline is a request compiler DEVTA 
    return a*b;
}

// int product(int a, int b){
// *****    static int c = 0; // This executes only once  // static means only 1st time ye line run hogi agli baar jab ye aayega tab ye line run nhi hogi
//     c = c + 1;      // next time the function is run , the value of c will be retained
//     return a*b+c;
// }

//***** Default arguments agr value nhi di hai to fixed value // Default arguments hamesha baad me likhni hai // extreame right me rahane chahiye // compulsory argumrnts hamesha extreame left me rahene chahiye


float moneyReceived(int currentMoney, float factor=1.04){ // 4% means 4/100 0.04 then interest + principle or * 1.04
    return currentMoney * factor;
}

//***** Constant arguments ise argument hote hai ki aap accidentaly argument change na kar baithe
// ki ye fn is value ko change na kar baithe

// int strlen(const char *p){

// }

int main(){
    int a, b;
    // cout<<"The Value of a and b is: "<<endl;
    // cin>>a>>b;
    // cout<<"The Product of a and b is: "<<product(a, b)<<endl;
    // cout<<"The Product of a and b is: "<<product(a, b)<<endl;
    // cout<<"The Product of a and b is: "<<product(a, b)<<endl;
    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money)<<" Rs after 1 year"<<endl;
    cout<<"FOR VIP: If you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money,1.1)<<" Rs after 1 year"<<endl;
    return 0;
}
