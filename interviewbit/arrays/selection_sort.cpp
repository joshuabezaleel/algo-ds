#include <stdlib.h>
#include <iostream>

using namespace std;

void selectionSort(int arr[], int length);
void printArray(int arr[], int size);

int main() {
    int arr[] = {17,35,23,41,2};
    selectionSort(arr, sizeof(arr)/sizeof(arr[0]));

    return 0;
}

void selectionSort(int arr[], int length) {
    int MAX = 99999;
    int min, temp;
    for(int i=0;i<length;i++){
        min = i;
        for(int j=i+1;j<length;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    printArray(arr, length);
}

void printArray(int arr[], int size) {
    for (int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

