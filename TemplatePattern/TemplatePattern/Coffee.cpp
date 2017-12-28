#include "Coffee.h"

void Coffee::brew(){
    printf("Dripping Coffee through filter\n");
}

void Coffee::addCondiments(){
    printf("Adding Sugar and Milk\n");
}

bool Coffee::customerWantsCondiments(){
    bool want = false;
    int answer = 0;
    printf("Do you want to Add Sugar and Milk ?\n");
    scanf("%d", &answer);
    if (answer == 1)
    {
        want = true;
    }
    return want;
}