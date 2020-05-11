#include <iostream>

using namespace std;

//Implemente una función que reciba dos cadenas a y b; y copie los elementos de la cadena a para la cadena b

void copcad(char *cad1, char *cad2, int t){
    for(int i=0; i<t; i++){
        cad2[i]=cad1[i];
    }
}

void printCad(char cad[], int t) { 
    int i; 
    for (i=0; i < t; i++) 
        cout<<cad[i]<<" ";
    cout<<endl;
} 

int main(){
    char cad1[5]={'a', 'b', 'c', 'd'};
    char cad2[5]={'e', 'f', 'g', 'h'};
    copcad(cad1, cad2, 5);
    printCad(cad2, 5);
    printCad(cad2, 5);
    
    return 0;
}