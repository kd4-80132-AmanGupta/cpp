
#include<iostream>
using namespace std;

class Employee{

 private  :

 int empId;
 float salary;
 string designation;

 public :

 Employee(){
 }
 Employee(int empId,float salary,string designation){
    this->empId=empId;
    this->salary=salary;
    this->designation=designation;
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

 string getDesignation(){
    return this->designation;
 }

 void setDesignation(string designation){
    this->designation=designation;
 }

  virtual void display(){
    cout<<"empId : "<<this->empId<<endl;
    cout<<"salary : "<<this->salary<<endl;
  }

 virtual void accept(){
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
        setDesignation("Manager");
    }
    Manager(int empId,float salary,float bonus,string designation){
        this->bonus=bonus;
        this->setEmpId(empId);
        this->setSalary(salary);
        this->setDesignation(designation);
    }
    
    float getBonus(){
        return this->bonus;
    }
    void setBonus(float bonus){
        this->bonus=bonus;
    }

    void display(){ 
    cout<<"manager details : \n";                             //d
    Employee::display();
    this->displayManager();
    }

    void accept(){
        cout<<"enter manager details : \n";
        Employee::accept();
        this->acceptManager();
    }

protected:
    void displayManager(){
        cout<<"bonus : "<<this->bonus;
    }

    void acceptManager(){
        cout<<"enter bonus :";
        cin>>this->bonus; 
    }
};

class Salesman : public virtual Employee{
    private :

    float comm;

    public :

    Salesman(){
        this->setDesignation("Salesman");
    }
    Salesman(int empId,float salary,float comm,string designation){
        this->comm=comm;
        setEmpId(empId);
        setSalary(salary);
        setDesignation(designation);
    }
    
    float getcomm(){
        return this->comm;
    }
    void setComm(float comm){
        this->comm=comm;
    }

    void display(){
    cout<<"salesman details : \n";
    Employee::display();
    this->displaySalesman();
    }

    void accept(){
        cout<<"enter salesman details : \n";
        Employee::accept();
        this->acceptSalesman();
    }

    protected:
    void displaySalesman(){                          //d
     cout<<"comm : "<<this->comm<<endl;
    }

    void acceptSalesman(){
        cout<<"enter comm : ";
        cin>>this->comm;
    }
};

class SalesManager:public Salesman,public Manager{
public :


SalesManager(){
    this->setDesignation("SalesManager");
}
SalesManager(int empId,float salary,float bonus,float comm ){
    this->setBonus(bonus);
    this->setComm(comm);
    this->setEmpId(empId);
    this->setSalary(salary);
} 

void display(){
    cout<<"salesManager details : \n";
  Employee::display();
  Salesman::displaySalesman();
  Manager::displayManager();
    
}
void accept(){
  Employee::accept();
  Salesman::acceptSalesman();
  Manager::acceptManager();
}
};

int choice;
int menu(){
    cout<<"*************************************************************\n";
    cout<<"0. exit\n";
    cout<<"1. add manager\n";
    cout<<"2. add salesman\n";
    cout<<"3. add salesManager\n";
    cout<<"4. to print the count of employee w.r.t their designation\n";
    cout<<"5. to print the respective designation of employees\n";
    cout<<"6. to display all employees\n";
    cout<<"enter your choice : \n";
    cout<<"*************************************************************\n";
    cin>>choice;
    return choice;
}


int main(){
     Employee *arr[10];
    int index=0;
    int countM=0,countS=0,countSM=0;

    while((menu())!=0){

          switch(choice){
           
    case 1 : if(index<10){
             arr[index] = new Manager();
             arr[index]->accept();
             index++;
    }
             else
             cout<<"limit reached,cannot add anymore employee\n";

             break;

    case 2 : if(index<10){
             arr[index] = new Salesman();
             arr[index]->accept();
             index++;
    }
             else
             cout<<"limit reached,cannot add anymore employee\n";

             break; 

    case 3 : if(index<10){
             arr[index] = new SalesManager();
             arr[index]->accept();
             index++;
             
    }
             else
             cout<<"limit reached,cannot add anymore employee\n";

             break; 

    case 4 : for(int i=0;i<index;++i){
                 if(arr[i]->getDesignation() == "Manager"){
                   countM++; 
                 }
                 else if(arr[i]->getDesignation() == "Salesman"){
                    countS++;
                 }
                 else if(arr[i]->getDesignation() == "SalesManager"){
                    countSM++;
                 }
                 else
                 cout<<"no employees";

          }
          cout<<"Manager : "<<countM<<endl;
          cout<<"Salesman : "<<countS<<endl;
          cout<<"SalesManager : "<<countSM<<endl;
             break;

    case 5 : for(int i=0;i<index;++i){
                cout<<"Designation : "<<arr[i]->getDesignation()<<endl;
    }
             break;

    case 6 :  for(int i=0;i<index;++i){
                arr[i]->display();
                cout<<endl;
    }
             break;        
    default : cout<<"wrong choice\n";  
              break;      
}
    }

    for(int i=0;i<index;++i){
        delete arr[i];
    }  

    return 0; 
}