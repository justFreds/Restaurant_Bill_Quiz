/* git reminders
git remote add origin https://github.com/justFreds/Restaurant_Bill_Quiz.git
git branch -M main
git push -u origin main 
*/
#include "menuItems.h"
#include <stdlib.h>
#include <string.h>
#include <time.h>
//prototype
static double getTotalCost(double, double, double);

//MAIN FUNCTION
//ACCEPTS TWO ARGUMENTS [TAX][TIP]-FROM USER
int main(int argc, char *argv[]) {  //argc == argument count && argv == argument value (array size)

    //defined in restaurant-table.c
    extern MenuItem Item_Table[];  
    extern const int MenuItemEntries;
    PtrToMenuItem itemPtr;
    //cast args into double
    double userTax = atof(argv[1]);
    double userTip = atof(argv[2]);

    //RANDOMIZE THE MENU ITEM SELECTED
    //create a random number to select item from MenuItem Array send into function
    time_t t;
    srand((unsigned)time(&t));
    //Return a randomItem from 0-3
    int randMenuItem = rand() % MenuItemEntries;
    itemPtr = &Item_Table[randMenuItem];

        //DISPLAY: MENU ITEM 
        //              COST
        //              TIP
        //              TAX
        //              TIP
        //              TOTAL   
    //printf("Struct Element: %d\n", randMenuItem); --FOR TESTING
    printf("Menu Item: %s\nCost:  $%4.2f\n", itemPtr->menuItem, itemPtr->initialCost);
    double costTax = ((userTax/100) * itemPtr->initialCost);
    double costTip = ((userTip/100) * itemPtr->initialCost);
    printf("Tax:   $%3.2f\nTip:   $%3.2f\n", costTax , costTip);
    printf("Total: $%4.2f\n", getTotalCost(userTax, userTip, itemPtr->initialCost));    

    return EXIT_SUCCESS;
}
/*
    FUNCTION TO CALCULATE TOTAL [cost, tip, tax]
    This is where we'll be calculating the cost
    Total
*/
static double getTotalCost(double tax, double tip, double cost) {
    tax = tax/100;
    tip = tip/100;
    return cost * (1+tax) *(1+tip);
}