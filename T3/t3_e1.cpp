#include <iostream>

using namespace std;

// Implementar una función reciba un arreglo de enteros y su tamaño y retorne la suma de los elementos de un arreglo. (Iterativa y recursiva)

void sumait(int *p, int t){
    int c=0;
    for(int i=0; i<t; i++){
        c+=*p++;
    }
    cout<<"la suma es: "<< c <<endl;
}
int sumare(int *p, int t){
    if(t==1){
        return *p;
    }else{
        return *(p+t-1)+sumare(p, t-1);
    }
}

int main(){
    int arr[] = {14, 27, 5, 12, 39, 7, 50};
    int t = sizeof(arr) / sizeof(arr[0]);
    int *p;//=arr;
    p=&arr[0];
    sumait(p, t);
    cout<<"la suma es: "<<sumare(p, t)<<endl;

    return 0;
}