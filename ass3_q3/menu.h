#include<iostream>
using namespace std;
#ifndef menu_h
#define menu_h

enum Emenu {
    Exit,
    to_Init,
    toSetRadius,
    toSetHeight,
    toGetRadius,
    toGetHeight,
    toPrintVolume
};
 
   Emenu eMenu();

#endif