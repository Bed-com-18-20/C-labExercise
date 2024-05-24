
#include <string>

class Person {
public:
    // Constructors
    Person();
    Person(const std::string& name, float weight);

    // Destructor
    ~Person();

    // Operator Overloading
    float operator+(const Person& otherPerson) const;

private:
    float mWeight;
    std::string mName;
};




// Constructors
Person::Person() : mWeight(0.0f), mName("") {}

Person::Person(const std::string& name, float weight) : mName(name), mWeight(weight) {}

// Destructor
Person::~Person() {}

// Operator overloading
float Person::operator+(const Person& otherPerson) const {
    return mWeight + otherPerson.mWeight;
}

