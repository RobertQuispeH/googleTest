#include "arrayStack.cc"
#include <iostream>
using namespace std;

int main(){
    Stack<int>* a =new ArrayStack<int> (2);
    cout << a->empty() << "\n"; //1 : true
    a->pop(); //1 : true
    //cout << a->top() << endl; //Assertion failed: !empty(), file ArrayStack.cc, line 36 
    a->push(5);
    a->push(6);
    a->push(4);
    cout << a->empty() << "\n"; //0 : false
    cout << a->top() << "\n"; // 4
    a->pop();
    a->pop();
    cout << a->top() << "\n"; // 5
    a->pop();
    //cout << a->top() << endl; //Assertion failed: !empty(), file ArrayStack.cc, line 36
    a->pop();
    a->pop();
    a->pop();
    cout << a->empty() << "\n"; // 1: true
    return 0;
}