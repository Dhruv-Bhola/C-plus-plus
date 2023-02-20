#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eId; //4
    char favChar; //1
    float salary; //4
    // Total memory use = 4 + 1 + 4 = 9 bytes
} ep;


union money 
{
     /* data */
    int rice; //4
    char car; //1
    float pounds; //4
    // Total memory use = Max of all three = 4 bytes
} ;

int main(){
    enum Meal{ breakfast, lunch, dinner};
    Meal m1 = lunch;     
    cout<<(m1==2)<<endl;

    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;

    // Structure : collection of data of different types

    // Union: Like structure but provide better memory management
    // union ek time par ek hi value dikhege nhi to overrite hokar garbage value milegi

    // union money m1;

    // m1.rice = 34;
    // m1.car = 'c' ;
    // cout<<m1.car<<endl;
     
    // struct employee harry;
    // ep shubham;
    // ep rohanDas;

    // harry.eId = 1;
    // harry.favChar = 'c';
    // harry.salary = 120000;

    // cout<<"The value is: "<<harry.salary<<endl;
    // cout<<"The value is: "<<harry.eId<<endl;
    // cout<<"The value is: "<<harry.favChar<<endl;





    return 0;
}