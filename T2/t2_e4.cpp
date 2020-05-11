#include <iostream>

using namespace std;

// Implemente una función que reciba una cadena y retorne su tamaño. (Iterativa y recursiva)

int tamcadit(char *cad){
    int c=0;
    while(cad[c]!='\0'){
        c++;
    }
    return c;
}

int tamcadre(char *cad){
    if(cad[0]=='\0'){
        return 0;
    }else{
        return (1 + tamcadre(cad+1));
    }
}

int main(){
    char cad[]={'a', 'b', 'c', 'd', 'e'};
    cout<<"tamanio es: "<<tamcadit(cad)<<endl;
    cout<<"tamanio es: "<<tamcadre(cad)<<endl;

    return 0;
}