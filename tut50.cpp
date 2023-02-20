#include <iostream>
using namespace std;

int main()
{
    // Basic Example
    int a = 4;
    int *ptr = &a;
    *(ptr) = 999;

    cout << "The value of a is " << *(ptr) << endl; // *(ptr) --> dereference of ptr

    //  new keyword operator
    // int *p = new int(40);
    float *p = new float(40.78);
    cout << "The value at address p is " << *(p) << endl;

    int *arr = new int[3];
    arr[0] = 10;
    // arr[1] = 20;
    *(arr+1) = 20;
    arr[2] = 30;

    // Dynamically allocated array ko free kar deta hai
    // free ho chuka hai dusri value ko store karne ke liye

    // deleting dynamically allocated of memory
    // delete arr;
    // deleting dynamically allocated block of memory
    // delete[] arr;
    // koi garentee nhi ki value yahi dega
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;

    // delete operator


    return 0;
}