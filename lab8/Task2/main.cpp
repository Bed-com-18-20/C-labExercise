#include <iostream>
using namespace std;
#include "Person.h"
int main (){
    Person jane = Person("jane", 60.0f);
    Person John = Person("John", 75.0f);
    float totalWeight = jane +John;
   cout <<"Total weight :"<< totalWeight <<endl;
    return 0;
}