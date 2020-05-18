#include <iostream>

using namespace std;

//Implemente una función que reciba dos cadenas a y b; dicha función debe concatenar la cadena a a la cadena b.
//(asuma que la cadena b tiene el tamaño suficiente para contener los elementos de a)

void concatcad( const char *cad1, char *cad2, int t1){
    for(int i=0; i<t1; i++){
        *(cad2++ +t1)=*cad1++;
    }
}

void printCad(char *cad, int t) { 
    int i; 
    for (i=0; i < t; i++) 
        cout<<*cad++<<" ";
    cout<<endl; 
} 

int main(){
    char cad1[5]={'f', 'g','h', 'i', 'j'};
    char cad2[10]={'a', 'b', 'c', 'd', 'e'};
    char* c1=cad1;
    char* c2=cad2;
    //c1=cad1; c2=cad2;
    concatcad(c1, c2, 5);
    printCad(c2, 10);

    return 0;
}