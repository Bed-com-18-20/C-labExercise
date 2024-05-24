#pragma once
#include <string>

class Person {
public:
    // Constructors
    Person();
    Person(const std::string& name, float weight);
    Person(float weight); // Constructor with a single float parameter

    // Destructor
    ~Person();

    // Operator Overloading
    float operator+(const Person& otherPerson) const;

private:
    float mWeight;
    std::string mName;
};
