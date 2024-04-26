#include <iostream>
#include <string>

int main() {
    // Dynamically allocate an integer
    int* dynamicInt = new int;

    // Dynamically allocate a string
    std::string* dynamicString = new std::string;
    std::cout << "Enter an integer value: ";
    std::cin >> *dynamicInt;
    std::cout << "Enter a string value: ";
    std::cin.ignore();
    std::getline(std::cin, *dynamicString);

    // Output the value of dynamically allocated integer
    std::cout << "Dynamically allocated integer value: " << *dynamicInt << std::endl;

    // displaying  the value of dynamically allocated string
    std::cout << "Dynamically allocated string value: " << *dynamicString << std::endl;

    // delete memory allocated for dynamic integer 
    delete dynamicInt;
    // delete memory allocated for dynamic  string
    delete dynamicString;

    return 0;
}
