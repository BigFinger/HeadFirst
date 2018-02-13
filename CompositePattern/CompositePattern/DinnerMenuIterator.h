#pragma once
#include "Iterator.h"

template<class T>
class DinnerMenuIterator : public Iterator<T>{
public:
    DinnerMenuIterator(T** items, int length);
    T& next();
    bool hasNext();
private:
    T** items;
    int length;
    int position;
};

template<class T>
DinnerMenuIterator<T>::DinnerMenuIterator<T>(T** items, int length){
    this->items = items;
    this->length = length;
    this->position = 0;
}

template<class T>
T& DinnerMenuIterator<T>::next(){
    T* item = (items[position++]);
    return *item;
}

template<class T>
bool DinnerMenuIterator<T>::hasNext(){
    if (position >= length)
        return false;
    return true;
}