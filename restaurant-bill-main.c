/* git reminders
git remote add origin https://github.com/justFreds/Restaurant_Bill_Quiz.git
git branch -M main
git push -u origin main 
*/
#include "restaurant-items.h"  
#include <stdlib.h>
#include <string.h>
#include <time.h>



//MAIN FUNCTION
//ACCEPTS TWO ARGUMENTS [TAX][TIP]-FROM USER
int main(int argc, char *argv[]) {  //argc == argument count && argv == argument value (array size)

    extern MenuItem Item_Table[];  
    extern const int MenuItemEntries;

    //create a random number to select item from MenuItem Array send into function
    time_t t;
    srand((unsigned)time(&t));
    int randMenuItem = rand() % MenuItemEntries;
/*     for(int i = 0; i <= 20; i++) {
        printf("Random#: %d  -Output: %d\n", i, randMenuItem);
    } */

    
    return EXIT_SUCCESS;
}


//RANDOMIZE THE MENU ITEM SELECTED

//PASS THE TAX AND TIP INTO FUNCTION [RETURNS TOTAL]

//DISPLAY: MENU ITEM CHOSEN
//              COST
//              TIP
//              TAX
//              TIP
//              TOTAL




/*
    FUNCTION TO CALCULATE TOTAL [cost, tip, tax]
    This is where we'll be calculating the cost
    Total
*/