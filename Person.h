#ifndef PERSON
#define PERSON

#include <string>

struct Person {
    std::string name;
    int age;
};

struct PersonList {
    Person* people;
    int numPeople;
};

#endif // PERSON