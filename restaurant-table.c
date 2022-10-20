#include <string.h> 
#include <stdlib.h> 
#include "restaurant-items.h"
//array of employees
MenuItem Item_Table[] =  
{ 
    //Menu Item Name, Menu Item Cost
    {"Salad", 9.95},
    {"Soup", 4.55},
    {"Sandwitch", 13.25},
    {"Pizza", 22.35},
}; 
const int MenuItemEntries = sizeof(Item_Table)/sizeof(Item_Table[0]);