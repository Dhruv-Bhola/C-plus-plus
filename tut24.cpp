#include <iostream>
using namespace std;

class Employee
{

    int id;
    static int count; // static class se jud jata hai isilea ise class variable bhi kahate hai
    // agar static nhi banate to hume har object ka alag se count milta
    // iske sath pure class ka ek hi count hai

public:
    void setData(void)
    {
        cout << "Enter the ID " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The ID of employee is " << id << " and this is Employee number " << count << endl;
    }

    static void getCount(void)
    {
        // cout<<id; //throws an error
        cout << "The value of Count is " << count << endl;
    }
};

// Count is the static data member of class Employee
int Employee ::count; // Default value is 0

int main()
{
    Employee harry, rohan, lovish;

    // harry.id = 1;
    // harry.count = 1; // Cannot do this as id and count are private
    harry.setData();
    harry.getData();
    Employee ::getCount(); // Static member functions inhe sirf static variables ka hi access hota hai

    rohan.setData();
    rohan.getData();
    Employee ::getCount();

    lovish.setData();
    lovish.getData();
    Employee ::getCount();

    return 0;
}