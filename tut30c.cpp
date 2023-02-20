// Create a function (Hint: Make it a friend function) which takes 2 point objects and computes the distance between those points 

// Use these examples to check your code:
// Distance between (1, 1) and (1, 1) is 0
// Distance between (0, 1) and (1, 6) is 5
// Distance between (1, 0) and (70, 0) is 69

#include<iostream>
#include<cmath>

using namespace std;

class Point{
    int x, y;
    public:
        Point(int a, int b){
            x = a;
            y = b;
        }
        void displayPoint(){
            cout<<"The Point is ("<<x<<", "<<y<<")"<<endl;
        }
    friend void distance(Point, Point);
};

void distance(Point p1, Point p2){
    int p;
    p = sqrt((p2.x - p1.x)*(p2.x - p1.x) + (p2.y - p1.y)*(p2.y - p1.y));
    cout<<p<<endl;  
}

int main(){
    Point q1(1, 0);
    q1.displayPoint();

    Point q2(70, 0);
    q2.displayPoint();

    cout<<"The distance between 2 points is ";
    distance(q1, q2);

    return 0;
}