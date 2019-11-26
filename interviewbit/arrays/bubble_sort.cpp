#include <stdlib.h>
#include <iostream>

using namespace std;

void bubbleSort(int arr[], int length);
void printArray(int arr[], int size);

int main() {
    int arr[] = {17,35,23,41,2};
    bubbleSort(arr, sizeof(arr)/sizeof(arr[0]));

    return 0;
}

void bubbleSort(int arr[], int length) {
    int temp;
    for(int i=0;i<length-1;i++){
        for(int j=0;j<length-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printArray(arr, length);
}

void printArray(int arr[], int size) {
    for (int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

