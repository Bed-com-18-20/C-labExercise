#include <iostream>
#include "Box.h"
int main(){
    Box Box1;
     Box Box2;
      Box Box3;
      double volume =0.0;

      //box 1 specifications
      Box1.setLength(6.0);
      Box1.setBreadth(7.0);
      Box1.setHeight(10.0);
       //box 2 specifications
      Box2.setLength(12.0);
      Box2.setBreadth(13.0);
      Box2.setHeight(10.0);
      //volume for box 1
      volume=Box1.GetVolume();
      cout<<"volume of box 1 :"<< volume <<endl;
      //volume for bot 2
      volume=Box2.GetVolume();
      cout<<"volume of box 2 :"<< volume <<endl;
        //volume for bot 3
        Box3=Box1 + Box2;
      volume=Box3.GetVolume();
      cout<<"volume of box 3 :"<< volume <<endl;
      return 0;

}