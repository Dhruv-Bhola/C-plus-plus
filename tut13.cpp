#include<iostream>
using namespace std;

int main(){

    // Array example

    int marks[] = {23, 45, 56, 89};
    int mathMarks[4];

    mathMarks[0] = 78;
    mathMarks[1] = 178;
    mathMarks[2] = 278;
    mathMarks[3] = 378;

    cout<<"These are mathMarks"<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;

    //You can change the value of an Array
    marks[2] = 455;
    // cout<<"These are marks"<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    // for(int i = 0; i < 4; i++){
    //     cout<<"The value of marks "<<i<<" is: "<<marks[i]<<endl;
    // }

    // Quick quiz: Do the same using while and do-while loops

    // int i = 0;
    // while(i < 4){
    //     cout<<"The value of marks "<<i<<" is: "<<marks[i]<<endl;
    //     i++;
    // }

    int i = 0;

    do{
        cout<<"The value of marks "<<i<<" is: "<<marks[i]<<endl;
        i++;
    }while(i < 4);
    
    // ********* pointer of arrays ***********
    // uaually &a address hold karta hai 
    // in case of arrays eg
    // marks[] ; marks word hold array 
    // if p = marks
    // Dereference *(p) = value of 1
    // Dereference *(p+1) = value of 2 and so on

    // pointer arithmatic
    // address new = address current + i * size of(datatype) // eg(bits) = 32 + 1 * 4 = 36
    // address new = (p + i)
    // address current = p

    // ÷≥≤˛˜˘ˇ¸.ˀ¯ßðƒ©ˍ˝˚-…æ«‘“,øʼ¨¥þ˳´˙œ¡™£₹§ˆ¶•̐°–≠`÷•–≠¡§₹₹

    // Pointers and arrays
    int* p = marks;
    cout<<*(p++)<<endl;
    // cout<<*(++p)<<endl;
    // cout<<*(p)<<endl;
    cout<<*(p++)<<endl;
    cout<<*(p++)<<endl;
    cout<<*(p++)<<endl;
    // cout<<"The value of marks[0]  *(p) is: "<<*(p)<<endl;
    // cout<<"The value of marks[1]  *(p+1) is: "<<*(p+1)<<endl;
    // cout<<"The value of marks[2]  *(p+2) is: "<<*(p+2)<<endl;
    // cout<<"The value of marks[3]  *(p+3) is: "<<*(p+3)<<endl;

    return 0;
}