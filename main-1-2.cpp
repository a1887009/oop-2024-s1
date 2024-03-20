#include <iostream>
#include "Person.h"

extern PersonList createPersonList(int n);

using namespace std;

int main() {
    int n = 3;

    PersonList personList = createPersonList(n);

    cout << "Created PersonList:" << endl;
    cout << "Number of people: " << personList.numPeople << endl;
    cout << "People:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Person " << i+1 << ": Name = " << personList.people[i].name << ", Age = " << personList.people[i].age << endl;
    }

    delete[] personList.people;

    return 0;
}