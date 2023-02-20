#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    ofstream out;
    out.open("sample60.txt");
    out << "This is me" << endl;
    out << "This is me also" << endl;
    out << "This is also me" << endl;
    out << "This is me alsi" << endl;
    out.close();

    ifstream in;
    string st, st2, st3, st4, st5;
    in.open("sample60.txt");

    // in>>st;

    /*
    getline(in, st);
    getline(in, st2);
    getline(in, st3);
    getline(in, st4);
    cout<<st<<endl
        <<st2<<endl
        <<st3<<endl
        <<st4<<endl;
    */

    /*
    in>>st>>st2>>st3>>st4>>st5;
    cout<<st<<" "
        <<st2<<" "
        <<st3<<" "
        <<st4<<" "
        <<st5<<endl;
    */

    while (in.eof() == 0) // eof = end of file
    {
        getline(in, st);
        cout << st << endl;
    }

    in.close();

    return 0;
}