//#ifdef NODE_H
//#define NODE_H

#include <iostream>

using namespace std;

class node{
    private:
    int elem;
    node *next;

    public:
    node();
    node(int value);
    void delete_all();
    void print();

    friend class LinkedList;
};

node::node(){
    elem=0;
    next=NULL;
}

node::node(int elem){
    this->elem=elem;
    next=NULL;
}

void node::delete_all(){
    if (next)
        next->delete_all();
    delete this;
}

void node::print(){
    cout << elem << "-> ";
}

//#endif
