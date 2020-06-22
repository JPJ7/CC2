#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include "node.h"

using namespace std;

template <class gen>

class LinkedList{
    private:
    node<gen> *head;
    int size;

    public:
    LinkedList();
    void insert(gen);
    void del_all();
    void del_by_elem(gen);
    void del_by_pos(int);
    void print();
    ~LinkedList();
};

template <typename gen>
LinkedList<gen>::LinkedList(){
    size=0;
    head=NULL;
}

template <typename gen>
void LinkedList<gen>::insert(gen data_){
    node<gen> *new_node=new node<gen>(data_);
    node<gen> *temp=head;
 
    if(!head){
        head = new_node;
    }else{
        if(head->elem > data_) {     //puntero->atributo ------- (*puntero).atributo
            new_node->next = head;
            head = new_node;
        }else{
            while((temp->next != NULL) && (temp->next->elem<data_)){
                temp=temp->next;
            }
            new_node->next=temp->next;
            temp->next=new_node;
        }
    }
    size++;
}

template <typename gen>
void LinkedList<gen>::del_all(){
    head->delete_all();
    head = 0;
}

template <typename gen>
void LinkedList<gen>::del_by_elem(gen data_){
    node<gen> *temp=head;
    node<gen> *temp1=head->next;
 
    int cont=0;
 
    if (head->elem == data_) {
        head = temp->next;
    }else{
        while(temp1){
            if(temp1->elem==data_){
                node<gen> *aux_nodex = temp1;
                temp->next = temp1->next;
                delete aux_nodex;
                cont++;
                size--;
            }
            temp = temp->next;
            temp1 = temp1->next;
        }
    }
    if (cont == 0) {
        cout << "El dato no existe " << endl;
    }
}

template <typename gen>
void LinkedList<gen>::del_by_pos(int pos){
    node<gen> *temp = head;
    node<gen> *temp1 = temp->next;
 
    if (pos < 1 || pos > size) {
        cout << "Fuera de rango " << endl;
    } else if (pos == 1) {
        head = temp->next;
    } else {
        for (int i = 2; i <= pos; i++) {
            if (i == pos) {
                node<gen> *aux_nodex = temp1;
                temp->next = temp1->next;
                delete aux_nodex;
                size--;
            }
            temp = temp->next;
            temp1 = temp1->next;
        }
    }
}

template <typename gen>
void LinkedList<gen>::print(){
    node<gen> *temp = head;
    if (!head) {
        cout << "La Lista está vacía " << endl;
    }else{
        while (temp){
            temp->print();
            if (!temp->next) cout << "NULL";
                temp = temp->next;
        }
  }
  cout << endl << endl;
}

template <typename gen>
LinkedList<gen>::~LinkedList(){
    node<gen> *ptr=this->head, *next=NULL;
    while(ptr!=NULL){
        next=ptr->next;
        delete(ptr);
        ptr=next;
    }
}


#endif