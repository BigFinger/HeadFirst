#pragma once
#include <string>
#include <map>

template<class T>
class CafeMenuIterator:public Iterator<T>{
public:
    CafeMenuIterator(map<int, T*>* menuItems, int length);
    bool hasNext();
    T& next();
private:
    map<int, T*>* items;
    int length;
    int position;
};

template<class T>
CafeMenuIterator<T>::CafeMenuIterator<T>(map<int, T*>* menuItems, int length){
    this->items = menuItems;
    this->length = length;
    position = 0;
}

template<class T>
bool CafeMenuIterator<T>::hasNext(){
    if (position >= length)
    {
        return false;
    }
    return true;
}

template<class T>
T& CafeMenuIterator<T>::next(){
    map<int, T*>::iterator iter = find(items->begin(), items->end(), position);
    return (*(iter->second));
}
