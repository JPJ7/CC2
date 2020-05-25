#include <iostream>
#include "persona.h"

using namespace std;

#include<iostream>

/////////////////////////////////////////////////

int main(){
    Persona per1;
    cout<<per1.getEdad()<<endl;
    cout<<"cambiar edad ";
    per1.setEdad(12);
    cout<<endl<<per1.getEdad()<<endl;

    cout<<per1.getNombre()<<endl;
    cout<<"cambiar Nombre ";
    per1.setNombre("JPJ");
    cout<<endl<<per1.getNombre()<<endl;

    cout<<per1.getApellido()<<endl;
    cout<<"cambiar apellido ";
    per1.setApellido("tmr");
    cout<<endl<<per1.getApellido()<<endl;

    return 0;
}