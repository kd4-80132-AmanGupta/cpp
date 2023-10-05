#include<iostream>
using namespace std;

class Product{
    private :

    int id;
    string title;
    float price;
    // char type;

    public:

    void setId(int id){
        this->id=id;
    }
    void setTitle(string title){
        this->title=title;
    }
    void setPrice(float price){
        this->price=price;
    }
    // void setType(char type){
    //     this->type=type;
    // }

     int getId(){
        return this->id;
    }
    string getTitle(){
        return this->title;
    }
    float getPrice(){
        return this->price;
    }

   virtual void accept(){
        int id;float price;char type;string title;
        cout<<"enter id : ";
        cin>>id;
        cin.ignore();
        this->setId(id);   //doubt

        cout<<"enter Title : ";
        
       getline(cin,title);

        this->setTitle(title);

        cout<<"enter price : ";
        cin>>price;
        this->setPrice(price);

   }
   virtual void calculateBill()=0;
};

class Book:public Product{

    private: 
    string author;

    public :
    Book(){
    }

    void accept(){
        cout<<"enter the book details : \n";
        Product::accept();
        cout<<"enter Author : ";
        cin.ignore();
        getline(cin,author);
        // this->setType('B');
    }

    void calculateBill(){
        this->setPrice(this->getPrice()*(1-0.1));
    }
};

class Tape:public Product{
    private:

    string artist;

    public:

    void accept(){
        cout<<"enter the Tape details : \n";
        Product::accept();
        cin.ignore();
        cout<<"enter Artist : ";
        getline(cin,artist);
        // this->setType('T');
    }

   void calculateBill(){
        this->setPrice(this->getPrice()*(1-0.05));
    }

};
int choice;
int menu(){
    cout<<"***************************\n";
    cout<<"0. exit\n";
    cout<<"1. add Book\n";
    cout<<"2. add Tape\n";
    cout<<"3. calculate total bill\n";
    cout<<"enter your choice : \n";
    cout<<"***************************\n";
    cin>>choice;
    return choice;
}

int main(){
    Product *arr[3];
    int index=0;
    float total=0;
    while((menu())!=0){

          switch(choice){
           
    case 1 : if(index<3){
             arr[index] = new Book();
             arr[index]->accept();
             arr[index]->calculateBill();
             index++;
    }
             else
             cout<<"book cannot be added, cart is full!!!\n";

             break;

    case 2 : if(index<3){
             arr[index] = new Tape();
             arr[index]->accept();
             arr[index]->calculateBill();
             index++;
    }
             else
             cout<<"Tape cannot be added, cart is full!!!\n";

             break; 

    case 3 :  for(int i=0;i<index;++i){
              total+=arr[i]->getPrice();
          }
             cout<<"total bill: "<<total<<endl;
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