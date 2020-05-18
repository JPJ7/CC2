#include <iostream>

using namespace std;

//Implementar una función que ordene los elementos de un arreglo: ascendente.

void swap(int *xp, int *yp) { 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
void ord(int *arr, int n) { 
   int i, j; 
   for (i = 0; i < n-1; i++)           
       for (j = 0; j < n-i-1; j++)  
           if (*(arr+j) > *(arr+j+1)) 
              swap((arr+j), (arr+j+1)); 
}

void printArray(int *arr, int n) { 
    int i; 
    for (i = 0; i < n; i++) 
        cout<<*arr++<<" "; 
} 

int main(){
    int arr[] = {14, 27, 5, 12, 39, 7, 50}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int *p;
    p=&arr[0];

    ord(p, n);

    cout<<"arreglo ordenado \n"; 
    printArray(arr, n); 
    cout<<endl;

    return 0;
}
