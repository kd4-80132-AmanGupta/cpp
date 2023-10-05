// Q1. Write a class Distance to hold feet and inches. Overload operator + as member function and ==
// operator as friend function. Also, overload ++ operator (to increment inches) as member function
// and -- operator as friend function. Overload << and >> operators to accept and display distance.


#include<iostream>
using namespace std;

class Distance{
    private:

    float feet;
    float inches;

    public :
    Distance(){
        this->feet=0;
        this->inches=0;
    }
    Distance(float feet, float inches){
        this->feet=feet;
        this->inches=inches;
    }
  //overloading + operator as member function.
   Distance operator+(Distance &d2){             
     Distance d;
     d.feet=this->feet+d2.feet;
     d.inches=this->inches+d2.inches;
     return d;
    }

    void display(){
        cout<<"feet : "<<this->feet<<endl;
        cout<<"inches : "<<this->inches<<endl;
    }

    void operator++(){
        this->inches+=1;
    }



    friend int operator==(Distance &d1,Distance &d2);
    friend void operator<<(ostream &out,Distance &d2);
    friend void operator>>(istream &in,Distance &d2);
};

int operator==(Distance &d1,Distance &d2){
   if((d1.feet==d2.feet) && (d1.inches=d2.inches))
    return 1;
   else 
    return 0;
}

void operator<<(ostream &out,Distance &d2){
    out<<"feet = "<<d2.feet<<", "<<"inches = "<<d2.inches<<endl;
}

void operator>>(istream &in,Distance &d2){
    cout<<"enter feet : ";
    in>>d2.feet;
    cout<<"enter inches : ";
    in>>d2.inches;
}



// void operator--(){
//     this->inches-=1;
// }

int main(){
    Distance d1(5,10);
    Distance d2(5,10);
    Distance d3;

    // d3=d1+d2;   //after operator overloading default assignment operator will work.
    // d3.display();


    // if(d1==d2)               //      == (equalto)operator overloading
    // cout<<"true\n";
    // else{
    // cout<<"false\n";
    // }

    // ++d2;
    // d2.display();

    // d2--;
    // d2.display();

    // cout<<d2;
    cin>>d2;
    d2.display();

   

    return 0;

}