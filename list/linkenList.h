#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H
#include "list.h"

template <typename T>
struct Node{
    T data;
    Node* next;
};

template <typename T>
class LinkenList:public List<T>{
    private:
        Node<T>* last;
    public:
        LinkenList(): last{nullptr}{}
        ~LinkenList(){delete last;}
        void append(T);
        T head();
        void insert(int,T);
        T get(int);
        bool isEmpty();
        int size();
};
#endif