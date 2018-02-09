#pragma once

template< class T>
class Iterator{
public:
    bool hasNext() = 0;
    T& next() = 0;
};