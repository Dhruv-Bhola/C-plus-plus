#include <iostream>
#include <vector>

using namespace std;

template <class T>
void display(vector<T> &v)
{
    cout << "Displaying this vector" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec1;
    int element, size;
    cout << "Enter the size of your vector: " << endl;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to add to this vector: ";
        cin >> element;
        vec1.push_back(element);
    }

    display(vec1);
    vector<int>::iterator iter = vec1.end();
    vec1.insert(iter, 2, 99);

    display(vec1);
    cout<<vec1.front()<<endl;

    cout<<vec1.back()<<endl;

    return 0;
}