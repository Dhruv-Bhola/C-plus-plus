//***** Recursive Functions  or  RECURSIONS
// recursion achha nhi hota bcoz value at higher term is not correct 
// same value bar bar dohrata hai 
// eg: fib(5) 
// eg: fib(5) = fib(4) + fib (3) 
// eg: fib(5) = fib(3) + fib(2) + fib(2) + fib(1)
// eg: fib(5) = fib(2) + fib(1) + fib(1) + fib(1) + fib(1)
// eg: fib(5) = fib(1) + fib(1) + fib(1) + fib(1) + fib(1) + fib(1)
// eg: fib(5) = (6*fib(1))

#include<iostream>
using namespace std;

// Factorial of a number:
// 6! = 6*5*4*3*2*1 = 720 
// 0! = 1 by defination
// 1! = 1 by defination
// n! = n * (n-1)!

// Step by step calculation of 4!
// factorial(4) = 4 * factorial(3);
// factorial(4) = 4 * 3 * factorial(2);
// factorial(4) = 4 * 3 * 2 * factorial(1);
// factorial(4) = 4 * 3 * 2 * 1;

int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n * factorial(n-1);
}

// Fibonacchi Series;
// 1,1,2,3,5,8,13,...
// 1+1 = 2
// 2+1 = 3 
// nth term:  (n-1)+(n-2) = nth term
// nth term:  2n-3 = nth term *****Wrong //-----> bcoz they are terms

// int fib(int q){
//     if(q)
//     return (2*q)-3;
// }

int fib(int n){
    if(n<2){
        return n;
    }
    return (fib(n-1) + fib(n-2));
}

int main(){

    int a;
    cout<<"Enter a number: "<<endl;
    cin>>a;

    // cout<<"The Factorial of "<<a<<" is: "<<factorial(a)<<endl;
    cout<<"The term in fibonacci sequence at position "<<a<<" is: "<<fib(a)<<endl;
    return 0;
}