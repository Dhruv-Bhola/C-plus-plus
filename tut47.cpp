#include <iostream>
#include <cmath>
using namespace std;

/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +. -. *(Times), / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of inheritance are you using?
    Q2. Which mode of inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of simple and scientific calculator.
    Q4. How is code reuseability implemented?
*/

class SimpleCalculator
{
    float a, b;

public:
    void getData()
    {
        cout << "Enter the value of a" << endl;
        cin >> a;
        cout << "Enter the value of b" << endl;
        cin >> b;
    }

    void performOperations1()
    {
        cout << "The value of a + b is " << (a + b) << endl;
        cout << "The value of a - b is " << (a - b) << endl;
        cout << "The value of a * b is " << (a * b) << endl;
        cout << "The value of a / b is " << (a / b) << endl;
    }
};

class ScientificCalculator
{
    float a, b;

public:
    void getData()
    {
        cout << "Enter the value of a" << endl;
        cin >> a;
        cout << "Enter the value of b" << endl;
        cin >> b;
    }

    void performOperations2()
    {
        cout << "The value of cos(a) is " << (cos(a)) << endl;
        cout << "The value of sin(a) is " << (sin(a)) << endl;
        cout << "The value of exp(a) is " << (exp(a)) << endl;
        cout << "The value of tan(a) is " << (tan(a)) << endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
    float a, b;

    public:
        void getData(){
            SimpleCalculator :: getData();
        }

};

int main()
{
    // SimpleCalculator calc;
    // calc.getData();
    // calc.performOperations1();

    // ScientificCalculator calc;
    // calc.getData();
    // calc.performOperations2();

    HybridCalculator calc;
    calc.getData();
    calc.performOperations1();
    calc.performOperations2();

}