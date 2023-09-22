#include<stdio.h>
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
    printf("Date is = %d-%d-%d \n",ptr->date,ptr->month,ptr->year);

}
void acceptDateFromconsole(struct Date *ptr){
    printf("enter date here :");
    scanf("%d%d%d",&ptr->date,&ptr->month,&ptr->year);
}

int main(){
    struct Date d;
    int a;
    do{
        printf("enter 1 to initialize date: \n");
        printf("enter 2 to give date as input: \n");
        printf("enter 3 to print date : \n");
        printf("enter any number to exit \n");

        scanf("%d",&a);
        switch(a){
            case 1 : initDate(&d);
                     break;

            case 2 : acceptDateFromconsole(&d);
                     break;

            case 3 : printDateOnConsole(&d);
                     break;

            default: a=0;
                     break;
                     
        }
    }
    while(a);
    return 0;
}