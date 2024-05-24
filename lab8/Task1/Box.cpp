#include "Box.h"
Box::Box(){
    length =0.0;
    breadth= 0.0;
    height =0.0;
}
Box::Box(const double newLength,const double newBreadth,const double newHeight){
    length = newLength;
    breadth = newBreadth;
    height=newHeight;
}
Box::~Box(){



}
double Box::GetVolume(){
    return length*breadth*height;
}
void Box::setLength(double len){
    length= len;
}
void Box::setBreadth(double bre){
    breadth =bre;
}
void Box::setHeight(double hei){
    height=hei;
}
//overload +operator to add two box object;
Box Box::operator+(const Box& b){
    Box box;
    box.length = this->length +b.length;
    box.height =this->height + b.height;
    box.breadth=this->breadth+b.breadth;
    return box;
}