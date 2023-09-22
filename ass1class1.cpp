#include<iostream>
using namespace std;

class Date{
    private :

    int date;
    int month;
    int year;

    public :

    void initDate(){
        this->date=22;
        this->month=9;
        this->year=2023;
    }

    void printDateOnConsole(){
        cout<<"the date is = "<<this->date<<"-"<<this->month<<"-"<<this->year<<endl;
    }

    void acceptDateFromConsole(){
        cout<<"enter date in this format(dd-mm-yyyy):";
        cin>>this->date;
        cin>>this->month;
        cin>>this->year;
    }

    bool IsLeapYear(){
        if((this->year%4==0 and this->year%100!=0 ) || this->year%400==0)
        return true;
        else 
        return false;
    }
};

int main(){
    Date d;
    int a;
    do{
        cout<<"enter 1 : to init the date"<<endl;
        cout<<"enter 2 : to give date as input"<<endl;
        cout<<"enter 3 : to print date"<<endl;
        cout<<"enter 4 : to Check year,whether it is leap or not leap year"<<endl;
        cout<<"enter 0 : to exit"<<endl;
        cin>>a;

        switch(a){

            case 1 : d.initDate();
                     break;

            case 2 : d.acceptDateFromConsole();
                     break;

            case 3 : d.printDateOnConsole();
                     break; 

            case 4 : if(d.IsLeapYear())
                    cout<<"year is leap year"<<endl;
                    else
                    cout<<"not a leap year"<<endl; 

            case 0 : break; 

            default : if(a>4)
                       break;                     
        }  
    } while(a);

    return 0;
}