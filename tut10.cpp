#include<iostream>

using namespace std;
int main(){
    /* Loops in C++:
    There are three types of Loops in C++:
        1. For Loop 
        2. While Loop
        3. do-While Loop
    */
    
     /* For Loop in C++ */
    // int i=1;
    // cout<<i;
    // i++;
    // cout<<i;
    // i++;
    // cout<<i;
    // i++;

    // Syntax for for loop
    // for(intialization; condition; updation)
    // {
    //     loop body(C++ code);
    // }

    // for (int i = 1; i <= 40; i++)
    // {
    //     /* code */
    //     cout<<i<<endl;
        
    //     }

    //  Example of Infinite For Loop

    // for (int i = 1; 34 <= 40; i++)
    // {
    //     /* code */
    //     cout<<i<<endl;
        
    //     }
    
    /* While Loop in C++ */
    // Syntax:
    // while(condition)
    // {
    //     C++ statements;         
    // }

    // Printing 1 to 40 using while loop

    // int i = 1;
    // while(i<=40){
    //     cout<<i<<endl;
    //     i++;
    // }

    //  Example of Infinite While Loop
    // int i = 1;
    // while(true){
    //     cout<<i<<endl;
    //     i++;
    // }
    
    /* do While Loop in C++ */
    // Syntax:
    // do 
    // {
    //     C++ statements;         
    // }while(condition);

    // Printing 1 to 40 using while loop

    // int i = 1;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while(false);

    // Multiplicative Table of 6 till 60

    // for(int i = 6; i <= 60 ;i++){
    //     cout<<i<<endl;
    //     i++;
    //     i++;
    //     i++;
    //     i++;
    //     i++;
    // }

    // for(int i = 6; ((i/6) && (i<=60)) ;i++){
    //     cout<<i<<endl;
    // }
    // correct
    // int n = 6;
    // for(int i = 1; i<=10; i++){
    //     cout<<i*n<<endl;
    // }

    // int n = 6;
    // int i = 1;
    // while(i<=10){
    //     cout<<i*n<<endl;
    //     i++;
    // }

    // int n = 6;
    // int i = 1;
    // do{
    //     cout<<i*n<<endl;
    //     i++;
    // }while(i<=10);

    int i = 2;
    int n = 6;

    for(int i = 1; i <= 10; i++){
        cout<<i*n<<endl;
    }

    return 0;
}