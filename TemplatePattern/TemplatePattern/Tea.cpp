#include "Tea.h"

void Tea::brew(){
    printf("Steeping the tea\n");
}

void Tea::addCondiments(){
    printf("Adding Lemon\n");
}

bool Tea::customerWantsCondiments(){
    int answer = 0;
    bool want = false;
    printf("Do you want to Add Lemon ?\n");
    scanf("%d", &answer);
    if (answer == 1)
    {
        want = true;
    }
    return want;
}