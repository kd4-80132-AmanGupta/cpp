#include<iostream>
struct Date{
    int date;
    int month;
    int year;
};

    void initDate(struct Date *ptr){
        ptr->date=22;
        ptr->month=9;
        ptr->year=2023;
    }

    void printDateOnConsole(struct Date *ptr){
       printf("date is : %d-%d-%d\n",ptr->date,ptr->month,ptr->year); 
    }

    void acceptDateFromConsole(struct Date *ptr){
        printf("enter the date here :");
        scanf("%d%d%d",&ptr->date,&ptr->month,&ptr->year);

    }

    bool IsLeapYear(struct Date *ptr){
        int y = ptr->year;
        if((y%4==0 && y%100!=0) || y%400==0)
        return true;
        else
        return false;

    }


int main(){
struct Date d;
int a ;
do{

    printf("enter 1 : to initialize the default date \n");
    printf("enter 2 : to give Date as an input\n");
    printf("enter 3 : to print date\n");
    printf("enter 4 : to check the date: Leap year or not Leap year\n");
    printf("enter any number : to exit\n"); 

    scanf("%d",&a);
    switch(a){
        case 1: initDate(&d);
                break;

        case 2 :acceptDateFromConsole(&d);
                break;

        case 3: printDateOnConsole(&d);
                break;

        case 4: if( IsLeapYear(&d))
                printf("leap year\n");
                else 
                printf("not leap year\n");
                break;

        default : a=0;
                break; 
    }
}
    while(a);

    return 0;
}