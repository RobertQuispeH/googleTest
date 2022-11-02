#include "linkenList.cc"
#include <iostream>
using namespace std;

int main(){
    List<int>* a =new LinkenList<int>;
    a->append(5);//0
    a->append(4);//1
    a->append(3);//3
    a->append(2);//4
    a->insert(2,75);//2
    cout<< a->get(3) << endl;
    cout<< a->size() << endl;
    return 0;
}