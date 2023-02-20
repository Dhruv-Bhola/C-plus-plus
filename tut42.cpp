#include <iostream>
#include <cmath>
using namespace std;

/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +. -. *(Times), / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operation of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of inheritance are you using?
    Q2. Which mode of inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of simple and scientific calculator.
    Q4. How is code reuseability implemented?
*/

class SimpleCalculator
{
protected:
    float x, y;

public:
    SimpleCalculator()
    {
        x = 10;
        y = 20;
    }

    void a()
    {
        cout << "The sum is " << (x + y) << endl;
        cout << "The subtraction is " << (x - y) << endl;
        cout << "The multiplication is " << (x * y) << endl;
        cout << "The division is " << (x / y) << endl;
        cout << endl;
    }
};

class ScientificCalculator
{
protected:
    float x1, y1;

public:
    ScientificCalculator()
    {
        x1 = 1.57;
        y1 = 2.7182818285;
    }

    void b()
    {
        cout << "The sine is " << sin(x1) << endl;
        cout << "The cosine is " << cos(x1) << endl;
        cout << "The logarithim is " << log(y1) << endl;
        cout << "The square root is " << sqrt(x1) << endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
public:
    void c()
    {
        a();
        b();
        cout << "3" << endl;
    }
};

int main()
{
    // SimpleCalculator a;
    // a.a();
    // cout<<endl;
    // ScientificCalculator b;
    // b.b();

    HybridCalculator c;
    c.c();
}