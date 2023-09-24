#include<iostream>
using namespace std;
#include "./cylinder.h"
#include "./menu.h"


int main(){
    Cylinder c;                //object of Cyliner class.
    Emenu E;
    Emenu choice; 
                                //object of Emenu enum .

  while(choice = eMenu()){
    switch(choice){
      case 1 : Cylinder(3,4);
      break;
      case 2 : cout<<"enter radius :";
               c.setRadius(5);
      break;
      case 3 : cout<<"enter radius :";
               c.setHeight(6);
      break;    
      case 4 : cout<<"radius = "<<c.getRadius();
      break;
      case 5 : cout<<"height = "<<c.getHeight();
      break;
      case 6 : c.printVolume();
      break;
      default : cout<<"invalid input";
    }
  }
    return 0;
}

