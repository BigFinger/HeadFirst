#include "CaffeineBeverage.h"

void CaffeineBeverage::prepareRecipe(){
    boilWater();
    brew();
    pourInCup();
    if (customerWantsCondiments())
    {
        addCondiments();
    }
}

void CaffeineBeverage::boilWater(){
    printf("Boiling water\n");
}

void CaffeineBeverage::pourInCup(){
    printf("Pouring into cup\n");
}

bool CaffeineBeverage::customerWantsCondiments(){
    return true;
}