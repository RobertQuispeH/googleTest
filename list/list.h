#ifndef LIST_H
#define LIST_H

template <typename T>
class List{
    public:
        virtual void append(T) = 0;
        virtual T head() = 0;
        virtual void insert(int,T) = 0;
        virtual T get(int) = 0;
        virtual bool isEmpty() = 0;
        virtual int size() = 0;
};
#endif