 #include<iostream>
 using namespace std;
 #include"./cylinder.h"
 
    Cylinder::Cylinder(){
        this->radius=2;
        this->height=3;

    }
    Cylinder::Cylinder(double radius, double height):radius(radius),height(height){}

    double Cylinder::getRadius(){
        return this->radius;
    }

    double Cylinder::getHeight(){
        return this->height;
    }
    
    void Cylinder::setRadius(double radius){
        this->radius=radius;

    }
    
    void Cylinder::setHeight(double height){
        this->height=height;
    }

    double Cylinder::calculateVolume(){
        return (3.14*this->radius*this->radius*this->height);
    }

    void Cylinder::printVolume(){
       cout<<"volume of cylinder : "<<this->calculateVolume();
    }
