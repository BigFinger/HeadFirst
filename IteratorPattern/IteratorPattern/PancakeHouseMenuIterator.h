#pragma once
#include "Iterator.h"

template<class T>
class PancakeHouseMenuIterator:public Iterator<T>{
public:
    PancakeHouseMenuIterator(vector<T*>* menuItems);
    bool hasNext();
    T& next();
private:
    vector<T*>* items;
    int position;
};

template<class T>
PancakeHouseMenuIterator<T>::PancakeHouseMenuIterator<T>(vector<T*>* menuItems){
    this->items = menuItems;
    position = 0;
}

template<class T>
bool PancakeHouseMenuIterator<T>::hasNext(){
    if (position >= this->items->size())
    {
        return false;
    }
    return true;
}

template<class T>
T& PancakeHouseMenuIterator<T>::next(){
    T* item = (*items)[position++];
    return *item;
}
