#include <iostream>

using namespace std;

//Implemente una función que reciba dos cadenas a y b; dicha función debe concatenar la cadena a a la cadena b.
//(asuma que la cadena b tiene el tamaño suficiente para contener los elementos de a)

void concatcad(char *cad1, char *cad2, int t1){
    for(int i=0; i<t1; i++){
        cad2[t1+i]=cad1[i];
    }
}

void printCad(char cad[], int t) { 
    int i; 
    for (i=0; i < t; i++) 
        cout<<cad[i]<<" ";
    cout<<endl; 
} 

int main(){
    char cad1[5]={'f', 'g','h', 'i', 'j'};
    char cad2[10]={'a', 'b', 'c', 'd', 'e'};
    concatcad(cad1, cad2, 5);
    printCad(cad2, 10);

    return 0;
}