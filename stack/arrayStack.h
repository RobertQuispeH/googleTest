#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H
#define FACTOR 10
#include "stack.h"

template <typename T>
class ArrayStack:public Stack<T>{
    private:
        T* data;
        int size;
        T* sp;
        T* old;
        void resize();
    public:
        ArrayStack(int s): size{s}, data{new T[s]}, sp{&data[0]}{}
        ~ArrayStack(){delete[] data;}
        void push(T);
        void pop(); //pop(newstack)   = newstack , pop(push(S,I))  = S
        T top(); //top(newstack)   = undefined , top(push(S,I))  = I
        bool empty(); //tempty(newstack) = true , empty(push(S,I))= false
};
#endif
