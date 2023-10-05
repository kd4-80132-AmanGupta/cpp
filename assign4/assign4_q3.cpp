// Q3. Write a Matrix class. Allocate memory dynamically in parameterized constructor. Also write
// parameter-less constructor. Write accept() and print() functions.
// Also provide add(), subtract(), multiply() and transpose() function.

#include<iostream>
using namespace std;

class Matrix{
    private :

    int r;
    int c;
    int **arr;

    public :

   Matrix(){
        this->r=3;
        this->c=3;
       arr = new int*[this->r];
        for(int i=0;i<this->r;i++){
         arr[i] = new int[this->c];
        }
   }
    Matrix(int r,int c){
        this->r=r;
        this->c=c;
       arr = new int*[this->r];
        for(int i=0;i<this->r;i++){
         arr[i] = new int[this->c];
        } 
    }


    public :

    void accept(){
        cout<<"enter the values for array:\n";
        for(int i=0;i<this->r;++i){
            for(int j=0;j<this->c;++j){
            cin>>this->arr[i][j];
        }
        }
        
    }
    void add(Matrix &m1,Matrix &m2){
        cout<<"addition of two matrix is :"<<endl;
        for(int i=0;i<this->r;++i){
            for(int j=0;j<this->c;++j){
               cout<<m1.arr[i][j]+m2.arr[i][j];
               cout<<" ";
            }
            cout<<endl;
        }
    }


    void subtract(Matrix &m1,Matrix &m2){
        cout<<"subtraction of two matrix is :"<<endl;
        for(int i=0;i<this->r;i++){
            for(int j=0;j<this->c;j++){
               cout<<m1.arr[i][j]-m2.arr[i][j]<<" ";  
            }
            cout<<endl;
        }


    }
    void multiply(Matrix &m1,Matrix &m2){
         cout<<"multiplication of two matrix is :";
       for(int i=0;i<this->r;++i){
        for(int j=0;j<this->c;++j){
            this->arr[i][j]=0;
            for(int k=0;k<this->c;++k){
                this->arr[i][j]+= m1.arr[i][k]*m2.arr[k][j];       
            }
            cout<<" ";
        }
        cout<<endl;
       }
    }
           
    void transpose(){
        cout<<"\n";
        for(int i=0;i<this->r;++i){
            for(int j=0;j<this->c;++j){
                cout<<this->arr[j][i]<<" ";
            }
            cout<<"\n";
        }
    }

    void display(){
        for(int i=0;i<this->r;++i){
            for(int j=0;j<this->c;++j){
                cout<<this->arr[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    
};

int main(){
    Matrix m1(3,3);
    m1.accept();

    // Matrix m2(3,3);
    // m2.accept();

    // Matrix m(3,3);
    // m.add(m1,m2);
    // m.subtract(m1,m2);

    // m.multiply(m1,m2);
    // m.display();
    
    m1.transpose();
    
    return 0;
}