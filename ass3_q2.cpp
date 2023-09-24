#include<iostream>
using namespace std;

class Tollbooth{
private:

    unsigned int noOfCars;
    double totalMoney;

 public:

  Tollbooth(){
    this->noOfCars=0;
    this->totalMoney=0;
   }

   void payingCars(){
        this->noOfCars+=1;
        this->totalMoney+=0.50;
    }

    void noPayCar(){
    this->noOfCars+=1;
    }

    void printOnConsole(){
        cout<<"total cars passed without paying : "<<this->noOfCars-this->totalMoney/0.50<<endl; 
        cout<<"total cars passed with paying : "<<this->totalMoney/0.50<<endl;     
        cout<<"total amount collected :"<<this->totalMoney<<endl;
        cout<<"total cars :"<<this->noOfCars<<endl;
        
    }
};

int main(){
    Tollbooth t;
    int a;

    do{
        cout<<" ===================================================================\n";
        cout<<" enter 1 : to add a car which has paid successfully\n";
        cout<<" enter 2 : to add a car which has not paid the amount\n";
        cout<<" enter 3 : to see the data : \n Total amount,Total cars,Total cars with successful payment nd with not successful payment\n\n";
        cout<<" enter any number to come out :\n";
        cout<<" ===================================================================\n\n";
        cin>>a;
        switch(a){
            case 1 : t.payingCars();
                     break;

            case 2 : t.noPayCar();
                     break;

            case 3 : t.printOnConsole();
                     break;

            default : a=0;
                      break;
        }

    }while(a);
    return 0;
}