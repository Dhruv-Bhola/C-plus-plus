// Function template

#include<iostream>
using namespace std;

// float funcAverage(int a, int b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

// float funcAverage2(int a, float b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

template <class T1, class T2>
float funcAverage(T1 a, T2 b){
    float avg = (a+b)/2.0;
    return avg;
}

template <class T>
void swapp(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

int main(){
    float a;
    // a = funcAverage <int, float> (5, 2.4);
    a = funcAverage (0, 0.1);
    // printf("The average of these numbers is %.3f", a);
    cout<<"The average of these numbers is "<<a<<endl;

    int x = 5, y = 7;

    cout<<x<<endl
        <<y<<endl;

    swapp <int> (x, y);

    cout<<x<<endl
        <<y<<endl;

    return 0;
}