#include <iostream>
using namespace std;

class Rectangle{
private :
float  length,width;
float rectangle(){
    length =0;
    width = 0;
}
void SetLength(float newLenght){
    length = newLenght;
}
void setWidth(float newWidth){
    width =newWidth;
}
public: float getLength(){
    return length;
}
public : float getWidth(){
    return width;
}
 public : float getArea(float length,float width){
    return length*width;
}

};
int main(){
    float length,width;
    Rectangle rectangle(float length, float width);
    cout<<"Enter the length of the rectangle:"<<endl;
    cin>>length;
    cout<<"Enter the width of the rectangle:"<<endl;
    cin>>width;
    cout <<"the area of the Rectangle is :"<< getArea();
}