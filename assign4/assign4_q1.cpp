#include<iostream>
using namespace std;

class Time{
    private :

    int hr;
    int min;
    int sec;

    public :

    Time(){

    }

    Time(int hr, int min,int sec){
        this->hr=hr;
        this->min=min;
        this->sec=sec;
    }
     //getter
    int getHr(){
        return this->hr;
    }
    int getMin(){
        return this->min;
    }
    int getSec(){
        return this->sec;
    }
    //setter
    void setHr(int hr){
        this->hr=hr;
    }
    void setMin(int min){
        this->min=min;
    }
    void setSec(int sec){
        this->sec=sec;
    }

    // void acceptTime(){
    //     cout<<"enter time:"<<endl;
    //     cout<<"hour = ";
    //     cin>>this->hr;
    //     cout<<endl<<"min = ";
    //     cin>>this->min;
    //     cout<<endl<<"sec = ";
    //     cin>>this->sec;


    // }

    void printTime(){
        cout<<"hour = "<<this->hr<<":";
        cout<<"min = "<<this->min<<":";
        cout<<"sec = "<<this->sec<<endl;

    }



};

int main(){

   Time **arr = new Time *[5];
   

   for(int i=0;i<5;i++){
     arr[i]=new Time();
   }

//    for(int i=0;i<5;i++){
//     arr[i]->acceptTime();

//    }

for(int i=0;i<5;i++){
    arr[i]->printTime();
}

for(int i=0;i<5;i++){
    delete arr[i];

}
delete[] arr;
  arr = NULL;


    return 0;
}