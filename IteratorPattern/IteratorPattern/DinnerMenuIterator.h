#pragma once
#include "Iterator.h"

template<class T>
class DinnerMenuIterator : public Iterator{
public:
    DinnerMenuIterator(MenuItem* iterms);
    T& next();
    bool hasNext();
private:
    MenuItem* items;
    int position;
};