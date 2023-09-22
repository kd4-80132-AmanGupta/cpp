#include<iostream>
using namespace std;

class Student{
    private :

    int rollNo;
    string name;
    float marks;

    public :

    void initStudent(){
        this->rollNo=7;
        this->name="Aman Gupta";
        this->marks=87.0;
    }

    void printStudentOnConsole(){
        cout<<"Student Details :"<<"\n";
        cout<<"RollNo = "<<this->rollNo<<endl;
        cout<<"Name = "<<this->name<<endl;
        cout<<"Marks = "<<this->marks<<endl<<"\n";
    }
    
    void acceptStudentFromConsole(){
        cout<<"enter the students detail here :"<<"\n";
        cout<<"enter rollNo:";
        cin>>this->rollNo;
        cout<<"enter Name:";
        cin>>this->name;
        cout<<"enter Marks:";
        cin>>this->marks;
    }
};
int main(){
    Student s;
    int in;
    do{
        cout<<"enter 1 : to initialize the stud. detail"<<"\n";
        cout<<"enter 2 : to give students detail as input"<<"\n";
        cout<<"enter 3 : to print the student details"<<endl;
        cout<<"enter any number to exit"<<"\n\n";
        cin>>in;

        switch(in){

            case 1 : s.initStudent();
                     break;

            case 2 : s.acceptStudentFromConsole();
                     break;

            case 3 : s.printStudentOnConsole();
                     break;

            default : in=0;
                      break; 
                   
        }
    }while(in);
    
    return  0;
}