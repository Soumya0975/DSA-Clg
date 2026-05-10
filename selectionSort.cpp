#include <iostream>
using namespace std;

// Selection Sort
void selectionSort(int a[], int n){
    for(int i = 0; i < n-1; i++){
        int min = i;

        for(int j = i+1; j < n; j++){
            if(a[j] < a[min])
                min = j;
        }

        // swap
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

// Print array
void print(int a[], int n){
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
}

int main(){
    int a[] = {20,12,10,15,2};
    int n = 5;

    selectionSort(a, n);

    cout << "Sorted array:\n";
    print(a, n);
}


