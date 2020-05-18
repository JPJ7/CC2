#include <iostream>

using namespace std;

// Implemente una función que reciba una cadena y retorne su tamaño. (Iterativa y recursiva)

int tamcadit(char *cad){
    int c=0;
    while(*cad++!='\0'){
        c++;
    }
    return c;
}

int tamcadre(char *cad){
    if(*cad=='\0'){
        return 0;
    }else{
        return(1 + tamcadre(++cad));
    }
}

int main(){
    char cad[]={'a', 'b', 'c', 'd', 'e'};
    //char cad[]={"abcde"};
    char *p;
    p=cad;
    cout<<"tamanio es: "<<tamcadit(p)<<endl;
    cout<<"tamanio es: "<<tamcadre(p)<<endl;

    return 0;
}