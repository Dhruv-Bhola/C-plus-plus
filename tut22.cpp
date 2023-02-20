// OOPS - Classes and Objects

// C++ --> initially called --> C with Classes by Jann Strou stroup
// Class --> Extension of Structures (in C)
// Structures had Limitations
//          - Members are public
//          - No Methods
// Classes --> Structures + More
// Classes --> can have Methods(Functions) and Properties(Values)
// Classes --> can make few members as private or public
// Structures in C++ are typedef
// You can declare objects along with the class declaration like this:
/* class Employee{
     // Class defination
 } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private

// Nesting of member function = bar bar use kar sate hai kisi bhi argument me
// nesting fn ke andar fn ko bula sakte hai eg  chk_bin() before ones_compliment
// isme ones_compliment ke andar hi chk_bin likh diya

// fn ko private banaya ja sakta hai isse

#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;
    void chk_bin(void);

public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number " << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary ::ones_compliment(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    cout << "Displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}