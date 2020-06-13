//#ifdef LINKEDLIST_H
//define LINKEDLIST_H

#include <iostream>
#include "node.h"

using namespace std;

class LinkedList{
    private:
    node *head;
    int size; 

    public:
    LinkedList();
    void insert(int);
    void del_all();
    void del_by_elem(int);
    void del_by_pos(int);
    void print();
    ~LinkedList();
};

LinkedList::LinkedList(){
    size=0;
    head=NULL;
}

void LinkedList::insert(int data_){
    node *new_node=new node(data_);
    node *temp=head;
 
    if(!head){
        head = new_node;
    }else{
        if(head->elem > data_) {
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

void LinkedList::del_all(){
    head->delete_all();
    head = 0;
}

void LinkedList::del_by_elem(int data_){
    node *temp=head;
    node *temp1=head->next;
 
    int cont=0;
 
    if (head->elem == data_) {
        head = temp->next;
    }else{
        while(temp1){
            if(temp1->elem==data_){
                node *aux_nodex = temp1;
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

void LinkedList::del_by_pos(int pos){
    node *temp = head;
    node *temp1 = temp->next;
 
    if (pos < 1 || pos > size) {
        cout << "Fuera de rango " << endl;
    } else if (pos == 1) {
        head = temp->next;
    } else {
        for (int i = 2; i <= pos; i++) {
            if (i == pos) {
                node *aux_nodex = temp1;
                temp->next = temp1->next;
                delete aux_nodex;
                size--;
            }
            temp = temp->next;
            temp1 = temp1->next;
        }
    }
}

void LinkedList::print(){
    node *temp = head;
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

LinkedList::~LinkedList(){
    node *ptr=this->head, *next=NULL;
    while(ptr!=NULL){
        next=ptr->next;
        delete(ptr);
        ptr=next;
    }
}

//#endif