#include <iostream>

using namespace std;

class Persona{
    private:
    string nombre, apellido;
    int edad;
    public:
    Persona();                      //constructor por defecto
    Persona(string, string, int);   //constructor por parámétros
    string getNombre() const;
    string getApellido() const;
    int getEdad() const;
    void  setNombre(const string);
    void setApellido(const string);
    void setEdad(const int);
};
////////////////////////////////////////////////////////////////////////
Persona::Persona(){
    nombre='o';
    apellido='o';
    edad=0;
}

Persona::Persona(string name, string surname, int age){
    nombre=name;
    apellido=surname;
    edad=age;
}
/////////////////////////////////////////////////////////////////////////
string Persona::getNombre() const{
    return nombre;
}

string Persona::getApellido() const{
    return apellido;
}

int Persona::getEdad()const{
    return edad;
}

void Persona::setNombre(const string name){
    nombre=name;
}

void Persona::setApellido(const string surname){
    apellido=surname;
}

void Persona::setEdad(const int edad){
    this -> edad=edad;
}