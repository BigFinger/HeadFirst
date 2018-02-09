#pragma once

template<class T>
class PancakeHouseMenuIterator:public Iterator{
public:
    PancakeHouseMenuIterator();
    bool hasNext();
    T& next();
private:
    vector<T> items;
    int position;
};
