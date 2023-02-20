//***** FUNCTION OVERLOADING

#include<iostream>
using namespace std;

int sum(int a, int b){
    cout<<"Using function with 2 arguments"<<endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout<<"Using function with 3 arguments"<<endl;
    return a+b+c;
}

// Overloaded Function
// Calculate vol of a cylinder
int volume(double r, int h){
    return (3.14 * r * r * h);
}
// Calculate vol of a cube
int volume(int a){
    return (a * a * a);
}
// Calculate vol of a rectangular box
int volume(int l, int b, int h){
    return (l * b * h);
}

int main(){
    cout<<"The Sum of 3 and 6 is: "<<sum(3,6)<<endl;
    cout<<"The Sum of 3, 7 and 6 is: "<<sum(3,7,6)<<endl;
    cout<<"The Volume of Cuboid of 3, 7 and 6 side is: "<<volume(3,7,6)<<endl;
    cout<<"The Volume of Cylinder of Radius 3 and Height 6 is: "<<volume(3,6)<<endl;
    cout<<"The Volume of Cube of Side 3 is: "<<volume(3)<<endl;

    return 0;
}

