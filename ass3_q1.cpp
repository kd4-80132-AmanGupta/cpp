//Write a menu driven program to calculate volume of the box(length * width * height).
// Provide necessary constructors.

#include<iostream>
using namespace std;

class Box{
    private:

   float length;
   float breadth;
   float height;

   public:
Box(){
    this->length=2;
    this->breadth=4;
    this->height=6;
}

Box(float length,float breadth,float height){
    this->length=length;
    this->breadth=breadth;
    this->height=height;
}

void acceptLbh(){
    cout<<"enter the value of length here :";
    cin>>this->length;
    cout<<"\n";
    cout<<"\nenter the value of breadth here :";
    cin>>this->breadth;
     cout<<"\n";
    cout<<"\nenter the value of height here ";
    cin>>this->height;
     cout<<"\n";

}

void printVolume(){
    float v=this->length*this->breadth*this->height;
    cout<<"volume of box is :"<<v<<endl;
}
};

int main(){
    Box b;
    int a;
    do{
        cout<<"enter 1 : to see the default volume:\n";
        cout<<"enter 2 : to provide the value of l,b,h as input\n";
        cout<<"enter 3 : to see the volume of box as output\n";
        cin>>a;
        switch(a){        
        case 1 : b.printVolume();
                 break;
        case 2 : b.acceptLbh();
                 break;
        case 3 : b.printVolume();      
                 break;
        default: a=0;
                 break;
        }

    }while(a);
    return 0;
}