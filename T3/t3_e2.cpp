#include <iostream>

using namespace std;

// Implementar una función que invierta los elementos de un arreglo de enteros (Iterativa y recursiva)
 
void swap(int *xp, int *yp) { 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
}

void init(int *arr, int t){
    for(int i=0; i<=t/2; i++){
        swap(*(arr+i), *(arr+--t));
    }
}

void inre(int *arr, int t){
    if(*arr<t)
    swap(*(arr++), *(arr+ --t));
    inre((++arr),--t);
}

void printArray(int *arr, int t) { 
    int i; 
    for (i=0; i < t; i++) 
        cout<<*arr++<<" "; 
} 

int main(){
    int arr[] = {14, 27, 5, 12, 39, 50};
    int t = sizeof(arr) / sizeof(arr[0]);
    int *p; p=&arr[0];
    
    init(p, t);
    //inre(p,t);

    printArray(arr, t);

    return 0;
}