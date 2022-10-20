#include <stdio.h>  
#include <stddef.h> 
//STRUCT OF MENU ITEMS WITH THERE COSTS
typedef struct {
    char *menuItem; //4bytes
    double initialCost; //8bytes
    //worst case scenario is 8bytes so previous become 8
    //total of 16 bytes 
} MenuItem, *PtrToMenuItem; 
typedef const MenuItem *PtrToMenuItem; 