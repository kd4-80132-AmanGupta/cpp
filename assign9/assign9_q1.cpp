// Write a user defined function factorial() that calculates factorial of given number and it throws
// exception if number entered by user is negative.
#include<iostream>
using namespace std;

class Factorial{
    private :
    int n;
    
    public :     
    Factorial(int n){
        this->n=n;
        // this->error_code=101;
        // this->message="value of n cannot be negative";

    }
    Factorial(){

    }

    void findFact(){
        int sum=1,t=this->n;
        while(t>=1){
            sum*=t; 
            --t;               
        }
         cout<<"factorial of "<<this->n<<" : "<<sum<<endl;
        }
       
    
    void accept(){
        cout<<"enter a number whose factorial u want t find : ";
        cin>>this->n; 
        if(this->n <= 0)
        throw 101;
    }




};

int main(){
    // Factorial f(6);
    Factorial f1;
    try{
        f1.accept();
        f1.findFact();
    }
    catch(int e){
        cout<<"Error : "<<e<<" factorial of -ve value is not possible\n"; 
    }
    
    

    return 0;
}