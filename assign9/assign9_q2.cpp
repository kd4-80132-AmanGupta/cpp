#include<iostream>
using namespace std;

enum AccountType{
    saving=1,
    current,
    Dmat
};

class Insuff_Fnds{
    private :

     int accId;
     double cur_balance;
     double withdraw_amount;

     public :
     Insuff_Fnds(int accId,double cur_balance,double withdraw_amount){

     }

     void display(){

     }

};

class Account{
    private :
    
    // Account *arr[5];
    int accountId;
    AccountType acc_Type;
    double balance;

    public:

    Account(){
        this->accountId=0;
        this->balance=0;
        this->acc_Type=saving;

    }
    Account(int accountId,AccountType acc_Type){
        this->accountId=accountId;
        this->acc_Type=acc_Type;
    }

    void accept(){
        cout<<"enter accountId : ";
        cin>>this->accountId;     
    }

    void display(){
        cout<<"accountId : "<<this->accountId<<endl;
        cout<<"Balance Amount : "<<this->balance<<endl;
    }

    void setId(int accountId){
        this->accountId=accountId;
    }
    void setType(AccountType acc_Type){
        this->acc_Type=acc_Type;
    }
    int getId(){
        return this->accountId;
    }
    AccountType getType(){
        return this->acc_Type;
    }
    double getBalance(){
        return this->balance;
    }
    void setBalance(double balance){
        this->balance=balance;
    }

    void deposit(double amount){
        this->balance+=amount;

    }
    void withdraw(double amount){
        this->balance-=amount;

    }
};
int choice;
int subChoice;

namespace Nmenus{
int menu(){
    cout<<"***************************************\n";
    cout<<"0. Exit : \n";
    cout<<"1. accept Account Details : \n";
    cout<<"2. Display Account Details : \n";
    cout<<"3. to Deposit amount : \n";
    cout<<"4. to Withdraw amount : \n";
    cout<<"***************************************\n";
    cout<<"enter your choice : ";
    cin>>choice;
    return choice;
}


int submenu(){
    cout<<"**********************************\n";
    cout<<"enter your account type : \n";
    cout<<"1. SAVING : \n";
    cout<<"2. CURRENT : \n";
    cout<<"3. DMAT : \n";
    cout<<"0. Exit : \n";
    cout<<"enter your choice : ";
    cin>>subChoice;
    cout<<endl;
    return subChoice;
}
}

using namespace Nmenus;
int main(){
    Account *arr[5];
    int index=0;

    while(menu()!=0){
        switch(choice){
            case 1 : if(index<5){
                   arr[index] = new Account(); 
                   arr[index]->accept(); 
                   while(submenu()!=0){
                   switch(subChoice){

                    case 1 : arr[index]->setType(saving);
                              break;

                    case 2 : arr[index]->setType(current);
                              break; 

                    case 3 : arr[index]->setType(Dmat);
                              break;

                    case 4 : cout<<"invalid choice";
                              break; 
                    }                        
                   }
                   index++;

                   break;
            }

            case 2 :int id2;
            if(index<5){
                cout<<"enter your AccountId : ";
                cin>>id2;
                for(int i=0;i<index;i++){
                    if(arr[i]->getId() == id2){
                        cout<<"*****************************\n";
                        arr[i]->display();
                        if(arr[i]->getBalance()==1)
                        cout<<"Account type : SAVING \n";

                        else if(arr[i]->getBalance()==2)
                        cout<<"Account type : CURRENT \n";

                        else if(arr[i]->getBalance()==3)
                        cout<<"Account type : DMAT \n";
                    }
                    else
                    cout<<"enter valid accountId";
                }
                break;
            }

            case 3 : double Amt1;
                     int id1;
                     cout<<"enter your AccountId : ";
                     cin>>id1;
                    for(int i=0;i<index;i++){
                       if(arr[i]->getId() == id1){
                        cout<<"enter your Amount to deposit: ";
                        cin>>Amt1;
                       arr[i]->deposit(Amt1);
                    }
                    else
                    cout<<"enter valid accountId";
                }
                    break;
            case 4 : double Amt;
                     int id;
                     cout<<"enter your AccountId : ";
                     cin>>id;
                    for(int i=0;i<index;i++){
                       if(arr[i]->getId() == id){
                        cout<<"enter Amount to withdraw : ";
                        cin>>Amt;
                         arr[i]->withdraw(Amt);
                        cout<<"Amount : "<<Amt<<" deducted from your account.\n";
                    }
                    else
                    cout<<"enter valid accountId";
                }
                    break;
                    
                     

        }

    }


    return 0;
}