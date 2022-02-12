#include <stdio.h>
#include "StoreItem.h"

// refer to methods defined in other class
void StoreItemSetWeightOunces
        (StoreItem* storeItem, int weightOunces) {
   (*storeItem).weightOunces = weightOunces;
}

void StoreItemPrint(StoreItem storeItem) {
   printf("Weight (ounces): %d\n", storeItem.weightOunces);
}