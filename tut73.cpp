#include <iostream>
#include <map>
#include <cstring>
using namespace std;

// Map is an associative array
int main()
{
    map<string, int> marksMap;
    marksMap["Harry"] = 98;
    marksMap["Jack"] = 59;
    marksMap["Rohan"] = 2;

    // marksMap.insert({{"Kozume"s, 169}, {"Kuroo", 187}});
    marksMap.insert(pair<string, int>("Kuroo", 187));
    marksMap.insert(pair<string, int>("Kozume", 169));
    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }
    cout << "The size is: " << marksMap.size() << endl;
    cout << "The max size is: " << marksMap.max_size() << endl;
    cout << "The empty's return value is: " << marksMap.empty() << endl;

    return 0;
}