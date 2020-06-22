#ifndef NODE_H
#define NODE_H

#include <iostream>

using namespace std;

template <class gen>

class node{
    private:
    

    public:
    en elem;
    node *next;


    node();
    node(gen);
    void delete_all();
    void print();

    friend class LinkedList;
};

template <typename gen>
node<gen>::node(){
    elem=NULL;
    next=NULL;
}

template <typename gen>
node<gen>::node(gen elem){
    this->elem=elem;
    next=NULL;
}

template <typename gen>
void node<gen>::delete_all(){
    if (next)
        next->delete_all();
    delete this;
}

template <typename gen>
void node<gen>::print(){
    cout << elem << "-> ";
}

#endif