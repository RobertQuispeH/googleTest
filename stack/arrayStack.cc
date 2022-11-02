#include "arrayStack.h"
#include <assert.h>

template <typename T>
void ArrayStack<T>::resize(){
    T *newData = new T[size + FACTOR];
    for (int i = 0; i < size; i++){
        newData[i] = data[i];
    }
    delete[] data;
    sp = newData + size;
    size += FACTOR;
    data = newData;
}

template <typename T>
void ArrayStack<T>::push(T t){
    int num = sp - data;
    if(num == size)
        resize();
    *sp = t;
    old = sp;
    sp++;
}
template <typename T>
void ArrayStack<T>::pop(){
    if(empty())
        return;
    sp--;
    //post
    assert(sp == old--);
}

template <typename T>
T ArrayStack<T>::top(){
    assert(!empty());
    T current = *(sp-1); 
    //post
    assert(current == *(old));
    return current;
}

template <typename T>
bool ArrayStack<T>::empty(){
    //pre
    assert(sp == data || sp-1 == old);
    bool bol = sp == data;
    return bol;
}
