#include <iostream>

using namespace std;

// Implementar una función reciba un arreglo de enteros y su tamaño y retorne la suma de los elementos de un arreglo. (Iterativa y recursiva)

void sumait(int arr[], int t){
    int c=0;
    for(int i=0; i<t; i++){
        c+=arr[i];
    }
    cout<<"la suma es: "<< c <<endl;
}
int sumare(int arr[], int t){
    if(t==1){
        return arr[0];
    }else{
        return arr[t-1]+sumare(arr, t-1);
    }
}

int main(){
    int arr[] = {14, 27, 5, 12, 39, 7, 50};
    int t = sizeof(arr) / sizeof(arr[0]);
    sumait(arr, t);
    cout<<"la suma es: "<<sumare(arr, t)<<endl;

    return 0;
}