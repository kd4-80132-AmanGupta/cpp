#include<iostream>
using namespace std;

class Address{
    private:

    string building;
    string street;
    string city;
    int pin;

    public:

    Address(){
        this->building="sunbeam karad";
        this->street="Shaniwar peth";
        this->city="Karad ";
        this->pin=415110;
    }
    Address(string building,string street,string city,int pin){
        this->building=building;
        this->street=street;
        this->city=city;
        this->pin=pin;
    }
    void accept(){
        cout<<"Enter the building name : "<<endl;
        getline(cin,this->building);

        cout<<"Enter the street : "<<endl;
        getline(cin,this->street);

        cout<<"Enter the city : "<<endl;
        cin>>this->city;
        
        cout<<"Enter the pincode : "<<endl;
        cin>>this->pin;
    }
    void display(){
        cout<<"\nAddress : \n"<<"Building : "<<this->building<<"\nStreet : "<<this->street<<"\nCity : "<<this->city<<"\nPin : "<<this->pin<<endl;
    }
    //getters
    string getbuilding(){
        return this->building;
    }
    string getstreet(){
        return this->street;
    }
    string getcity(){
        return this->city;
    }
    int getpin(){
        return this->pin;
    }
    //setters
    void setbuilding(string building){
        this->building=building;
    }
    void setstreet(string street){
        this->street=street;
    }
    void setcity(string city){
        this->city=city;
    }
    void setpin(int pin){
        this->pin=pin;
    }

};

int main(){
    Address a;
    Address("cdac","main road","pune",415132);
    a.accept();
    a.display();
    return 0;
}