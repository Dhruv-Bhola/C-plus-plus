#include<iostream>
#include<fstream>

using namespace std;

int main(){
    // connecting our file with hout stream
    ofstream hout("sample60.txt");

    // creating a name string and filling it with the string entered by the user
    string name;
    cout<<"Enter your name: "<<endl;
    cin>>name;

    // writing a string to the file
    hout<<"My name is " + name;

    hout.close(); // Close the linc b\w tut61.cpp and sample60.txt

    ifstream hin("sample60.txt");
    string content;
    // hin>>content;
    getline(hin, content);
    cout<<"The content of this file is: "<<content<<endl;
    hin.close();
    
    return 0;
}