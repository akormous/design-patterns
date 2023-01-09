#pragma once

template<class T>
class Iterator {
public:
    Iterator() {}
    virtual ~Iterator() {}
    virtual bool hasNext() = 0;
    virtual T next() = 0;
    virtual void remove() = 0; 
private:
};