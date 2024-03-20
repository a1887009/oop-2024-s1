#include <iostream>
#include "Person.h"

extern PersonList deepCopyPersonList(PersonList pl);

int main() {
    PersonList originalList;
    originalList.numPeople = 2;
    originalList.people = new Person[2];
    originalList.people[0].name = "Alice";
    originalList.people[0].age = 30;
    originalList.people[1].name = "Bob";
    originalList.people[1].age = 35;

    PersonList copiedList = deepCopyPersonList(originalList);

    std::cout << "Original PersonList:" << std::endl;
    for (int i = 0; i < originalList.numPeople; ++i) {
        std::cout << "Person " << i+1 << ": Name = " << originalList.people[i].name << ", Age = " << originalList.people[i].age << std::endl;
    }

    std::cout << "\nCopied PersonList:" << std::endl;
    for (int i = 0; i < copiedList.numPeople; ++i) {
        std::cout << "Person " << i+1 << ": Name = " << copiedList.people[i].name << ", Age = " << copiedList.people[i].age << std::endl;
    }

    delete[] originalList.people;
    delete[] copiedList.people;

    return 0;
}