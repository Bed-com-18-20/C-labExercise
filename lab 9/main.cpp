
#include<iostream>
using namespace std;
#include "Rectangle.h"
#include "Triangle.h"
int main(){
    Rectangle rect;
    Triangle tria;
    rect.setValues (4,5);
    tria.setValues (4,5);
    cout<<rect.Area()<<'\n';
    cout<<tria.Area()<<'\n';
    return 0;
}