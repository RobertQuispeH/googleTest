#include "linkenList.h"
#include <assert.h>

template <typename T>
void LinkenList<T>::append(T e){
    if(isEmpty()){
        last = new Node<T>;
        last->data = e;
        last->next = last;
        return;
    }
    Node<T>* n = new Node<T>;
    n->data = e;
    n->next = last->next;
    last->next = n;
    last = n;
}

template <typename T>
bool LinkenList<T>::isEmpty(){
    return last == nullptr;
}
template <typename T>
T LinkenList<T>::head(){
    return last->next->data;
}

template <typename T>
T LinkenList<T>::get(int a){
    Node<T>* iter = last;
    for(int i = 0; i <= a;i++){
        iter = iter->next;
    }
    return iter->data;
};
template <typename T>
int LinkenList<T>::size(){
    int c = 0;
    Node<T>* iter = last;
    while(iter){
        iter = iter->next;
        if(iter == last)
            iter = nullptr;
        c++;
    }
    return c;
}

template <typename T>
void LinkenList<T>::insert(int a,T b){
    Node<T>* newNodo = new Node<T>;
    Node<T>* aux = last;
    for(int i = 0; i < a;i++){
        aux = aux->next;
    }
    newNodo->data = b;
    newNodo->next = aux->next;
    aux->next = newNodo;
}