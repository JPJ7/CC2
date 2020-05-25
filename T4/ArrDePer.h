#include <iostream>
#include "persona.h"
#include <assert.h>

using namespace std;

class ArregloDePersonas{
    private:
    Persona *p; 
    int tam;
    public:
    ArregloDePersonas();
    ArregloDePersonas(const Persona [], const int);
    ~ArregloDePersonas();
    void redimensionar(int);
    void push_back(const Persona &);
    void insert(const int, const Persona &);
    void remove(const int);
    const int getSize() const;
    void clear();
};
////////////////////////////////////////////////////////////////////////////////
ArregloDePersonas::ArregloDePersonas(const Persona personas[], const int tam){
    p = &personas[0];
    this -> tam=tam;
}

ArregloDePersonas::ArregloDePersonas(const ArregloDePersonas &o){
    p=o.p;
    tam=o.tam;
}

ArregloDePersonas::~ArregloDePersonas(){
    delete[] p;
}
//////////////////////////////////////////////////////////////////////////////////
void ArregloDePersonas::redimensionar(int n){

}

void ArregloDePersonas::push_back(const Persona &p){

}

void ArregloDePersonas::insert(const int pos, const Persona &p){
    assert (pos >= 0 && pos < tam);
    for (int i = pos; i < tam-1; i++){
        (p+i) = (p+i+1);//colapse...
    }
}

void ArregloDePersonas::remove(const int pos){
    assert (pos >= 0 && pos < tam);
    for (int i = pos; i < tam-1; i++)
        *(p+i) = *(p+i+1);
    redimensionar(tam-1);
}

const int ArregloDePersonas::getSize() const{
    return tam;
}

void ArregloDePersonas::clear(){
    delete[] p;
}