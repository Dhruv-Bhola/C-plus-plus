// LIST - to store data

#include <iostream>
#include <list>

using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << "\n";
    cout << lst.size() << endl;
    cout << endl;
}

int main()
{
    list<int> list1; // list of 0 length
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    // list1.push_back(9);
    list1.push_back(12);

    display(list1);
    // REMOVING ELEMENTS FORM THE LIST
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(9);

    // SORTING THE LIST
    // list1.sort();
    // display(list1);

    // REVERSING THE LIST
    // list1.reverse();
    // display(list1);

    list<int> list2(3); // empty list of size 7
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 06;
    iter++;
    *iter = 9;
    iter++;
    display(list2);

    // list1.merge(list2);
    // list1.sort();
    // list2.sort();
    // cout<<"1List 1 After merging ";
    // display(list1);

    // list1.merge(list1);
    // cout<<"2List 1 After merging ";
    // display(list1);

    // list2.merge(list1);
    // cout<<"3List 2 After merging ";
    // display(list2);

    list1.swap(list2);
    display(list1);
    display(list2);

    return 0;
}