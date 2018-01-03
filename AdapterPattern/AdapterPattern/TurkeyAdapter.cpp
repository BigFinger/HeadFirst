#include "TurkeyAdapter.h"

TurkeyAdapter::TurkeyAdapter(Turkey* turkey){
    this->turkey = turkey;
}

void TurkeyAdapter::quack(){
    if (this->turkey != NULL)
    {
        this->turkey->gobble();
    }
}

void TurkeyAdapter::fly(){
    if (this->turkey != NULL)
    {
        for (int i = 0; i < 5; i++)
        {
            this->turkey->fly();
        }
    }
}