#include<iostream>
using namespace std;

int sum(int a, int b){ 
    int c = a + b;     
    return c;
}

// This will not swap a and b 
void swap(int a, int b){ // temp a b // turant destroy 
    int temp = a;        // 4    4 5
    a = b;               // 4    5 5 
    b = temp;            // 4    5 4
}

// ***** Call by Reference Using Pointers *****

// This will swap pointer adress se hange hoga
void swapPointer(int* a, int* b){ // temp a b // thodi der ke liye change fir destroy
    int temp = *a;         // 4    4 5
    *a = *b;               // 4    5 5 
    *b = temp;             // 4    5 4
}

// ***** Call by Reference Using C++ Reference Variables *****
void swapReferenceVar(int &a, int &b){ // temp a b 
    int temp = a;        // 4    4 5
    a = b;               // 4    5 5 
    b = temp;            // 4    5 4
}

// ***** Reference by value ****
// int & swapReferenceVar(int &a, int &b){ // temp a b 
//     int temp = a;        // 4    4 5
//     a = b;               // 4    5 5 
//     b = temp;            // 4    5 4
//     return a;
// }

int main(){
    int x = 4, y = 5;
    // cout<<"The sum of 4 and 5 is: "<<sum(a,b)<<endl;
    cout<<"The value of x is: "<<x<<" and the value of y is: "<<y<<endl;
    // swap(x, y); // This will not swap a and b 
    // swapPointer(&x, &y);// This will Swap a and b using pointer reference // isme copy nhi kar rhe isme dono same chij ko google drive link (location)se le rhe hai
    swapReferenceVar(x, y);// This will Swap a and b using reference Variables
    // swapReferenceVar(x, y) = 766;// This will Swap a and b using reference Variables
    cout<<"The value of x is: "<<x<<" and the value of y is: "<<y<<endl; // no change bcoz no return copy ho gye hai x,y swap me keval swap ne change kiya hai usko diya nhi hai
    return 0;

}