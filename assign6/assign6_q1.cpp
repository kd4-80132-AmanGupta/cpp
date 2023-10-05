#include<iostream>
using namespace std;

class Date{
    private :

    int day;
    int month;
    int year;

    public :

    Date(){
        this->day;
        this->month;
        this->year;
    }
    Date(int day, int month, int year){
        this->day=day;
        this->month=month;
        this->year=year;
    }

    int getYear(){
        return this->year;
    }

    void display(){
        cout<<"date : "<<this->day<<endl;
        cout<<"month : "<<this->month<<endl;
        cout<<"year : "<<this->year<<endl;        
    }

    void accept(){
        cout<<"enter day:";
        cin>>this->day;
        cout<<"enter month";
        cin>>this->month;
        cout<<"enter year";
        cin>>this->year;

    }
    bool isLeapYear(){
        if((year%4==0 && year%100!=0) || year%400==0)
        return true;
        else
        return false;
    }


};

class Person{
    private:

    string name;
    string address;
    Date dob;

    public :
    Person(){
        this->name="";
        this->address="";
    }

    Person(string name,string address,int day,int month,int year):dob(day,month,year){
        this->name=name;
        this->address=address;
    }

    void display(){
        cout<<"name : "<<this->name<<endl;
        cout<<"address : "<<this->address<<endl;
        dob.display();
        
    }

    void accept(){
        cout<<"enter name:";
        cin>>this->name;
        cout<<"enter address:";
        cin>>this->address;
        cout<<"enter day";
        dob.accept();
        
    }

};

class Employee{
    private :

    int empId;
    double salary;
    string dept;
    Date doj;

    public :

    Employee(){
        this->empId=0;
        this->salary=0;
        this->dept="";
    }

    Employee(int empId,double salary,string dept,int day,int month,int year):doj(day,month,year){
        this->empId=empId;
        this->salary=salary;
        this->dept=dept;
    }

    void accept(){
        cout<<"enter EmpId:";
        cin>>this->empId;
        cout<<"enter salary";
        cin>>this->salary;
        doj.accept();
    }

    void display(){
        cout<<"EmpId : "<<this->empId<<endl;
        cout<<"salary : "<<this->salary<<endl;
        cout<<"deptName : "<<this->dept<<endl;
        doj.display();
        if(doj.isLeapYear())
        cout<<doj.getYear()<<" : is a leap year";
        else
        cout<<doj.getYear()<<" : is not a leap year" ;

    }



};

int main(){
    Employee e(1,1000,"training",27,9,1700);
    e.display();
    Date d(1,22,2023);
    



    return 0;
}