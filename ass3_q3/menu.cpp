#include "menu.h"

Emenu eMenu(){

    int choice;
    cout<<"\n****************************\n";
    cout<<"enter 0 : to EXIT\n";
    cout<<"enter 1 : to init\n"; 
    cout<<"enter 2 : to setRadius\n";
    cout<<"enter 3 : to setHeight\n";
    cout<<"enter 4 : to getRadius\n";
    cout<<"enter 5 : to getHeight\n";
    cout<<"enter 6 : to printVolume\n";
    cout<<"****************************\n";
    cin>>choice;
    return Emenu(choice);
}


