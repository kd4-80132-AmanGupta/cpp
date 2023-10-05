#include<iostream>
using namespace std;

class Employee{

 private  :

 int empId;
 float salary;

 public :

 Employee(){

 }
 Employee(int empId,float salary){
    this->empId=empId;
    this->salary=salary;
 }

 int getEmpId(){
    return empId;
 }

 void setEmpId(int empId){
    this->empId=empId;
 }

 float getSalary(){
    return salary;
 }

  void setSalary(float salary ){
    this->salary=salary;
 }
 
  void display(){
    // cout<<"employee details : \n";
    cout<<"empId : "<<this->empId<<endl;
    cout<<"salary : "<<this->salary<<endl;
 }

 void accept(){
    // cout<<"enter employee details : \n";
    cout<<"enter empId :";
    cin>>this->empId;

    cout<<"enter salary :";
    cin>>this->salary;

 }
};

class Manager : public virtual Employee{
    private :

    float bonus;

    public :

    Manager(){

    }
    Manager(int empId,float salary,float bonus){
        this->bonus=bonus;
        setEmpId(empId);
        setSalary(salary);
    }
    
    float getBonus(){
        return this->bonus;
    }
    void setBonus(float bonus){
        this->bonus=bonus;
    }

    void display(){
    cout<<"manager details : \n";
    cout<<"bonus : "<<this->bonus<<endl;
    Employee::display();
    }

    void accept(){
        cout<<"enter manager details : \n";
        cout<<"enter bonus : ";
        cin>>this->bonus;
        Employee::accept();
    }

protected:
    void displayManager(){
    // cout<<"only Manager : \n";
    cout<<"bonus : "<<this->bonus<<"\n";
    }

    void acceptManager(){
        cout<<"enter only manager details : \n";
        cout<<"enter bonus :";
        cin>>this->bonus;
    }
};



class Salesman : public virtual Employee{
    private :

    float comm;

    public :

    Salesman(){

    }
    Salesman(int empId,float salary,float comm){
        this->comm=comm;
        setEmpId(empId);
        setSalary(salary);
    }
    
    float getcomm(){
        return this->comm;
    }
    void setComm(float comm){
        this->comm=comm;
    }

    void display(){
    cout<<"salesman details : \n";
    cout<<"comm : "<<this->comm<<"\n";
    Employee::display();
    }

    void accept(){
        cout<<"enter salesman details : \n";
        cout<<"enter comm : ";
        cin>>this->comm;
        Employee::accept();
    }

    protected:
    void displaySalesman(){
    // cout<<"only Salesman detail : \n";
    cout<<"comm : "<<this->comm;
    }

    void acceptSalesman(){
        cout<<"enter comm :";
        cin>>this->comm;
    }
};


class SalesManager:public Salesman,public Manager {
public :

SalesManager(){
}

SalesManager(int empId,float salary,float bonus,float comm ){
    this->setBonus(bonus);
    this->setComm(comm);
    this->setEmpId(empId);
    this->setSalary(salary);
}

void display(){
 


}

void accept(){
    
    Salesman::accept();
    Manager::accept();
}
};
int main(){

    SalesManager sm;
    //doubt about accept
    sm.accept();
    cout<<endl;
    sm.display();
   
    return 0;
    
}