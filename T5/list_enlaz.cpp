#include <iostream>
#include "LinkedList.h"

using namespace std;

int main(){
    LinkedList list1;
    int elem=2, pos;

    list1.insert(elem);
    list1.print();
    elem=1;
    list1.insert(elem);
    list1.print();
    list1.del_all();
    list1.print();

    return 0;
}