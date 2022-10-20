/* git reminders
git remote add origin https://github.com/justFreds/Restaurant_Bill_Quiz.git
git branch -M main
git push -u origin main 
*/
#include <stdio.h>  
#include <stddef.h> 
#include <stdlib.h>
#include <string.h>
#include <time.h>

//STRUCT OF MENU ITEMS WITH THERE COSTS
typedef struct {
    char *menuItem; //4bytes
    double initialCost; //8bytes
    //worst case scenario is 8bytes so previous become 8
    //total of 16 bytes 
} MenuItem, *PtrToMenuItem; 
typedef const MenuItem *PtrToMenuItem; 

//MAIN FUNCTION
//ACCEPTS TWO ARGUMENTS [TAX][TIP]-FROM USER


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