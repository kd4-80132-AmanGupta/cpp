#include<iostream>
using namespace std;

namespace NStudent{
    class Student{

   private:

    int roll_no;
    string name;
    int marks;

    public :

    void initStudent(){
        this->roll_no=80132;
        this->name="Aman";
        this->marks=87;
    }
    void acceptStudentFromConsole(){
        cout<<"Enter the rollNo : "<<endl;
        cin>>roll_no;

        cout<<"Enter the name : "<<endl;
        cin>>name;

        cout<<"Enter the marks : "<<endl;
        cin>>marks;
    }
    void printStudentOnConsole(){
        cout<<"Student's Detail : \nMarks - "<<roll_no<<",\nName - "<<name<<",\nMarks - "<<marks<<endl;
    }
   };
}
int main(){
    NStudent::Student s1;
    int a;
    do {
         cout<<"*************************\n";
         cout << "1. Initialize the Date" << endl;
         cout << "2. Print the Date" << endl;
         cout << "3. Accept the Date" << endl;
         cout << "4. enter any number to exit" << endl;
          cout<<"*************************\n";
   
        cin>>a;
        switch (a){
            case 1: s1.initStudent();
            cout<<"Initialization done."<<endl;
            break;
            case 2: s1.printStudentOnConsole();
            break;
            case 3: s1.acceptStudentFromConsole();
            break;
            default: a=0;
            break;
        }
    }while(a);

    return 0;
}