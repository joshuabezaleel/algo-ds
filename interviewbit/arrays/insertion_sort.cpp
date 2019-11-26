#include <stdlib.h>
#include <iostream>

using namespace std;

void insertionSort(int arr[], int length);
void printArray(int arr[], int size);

int main() {
    int arr[] = {17,35,23,41,2};
    insertionSort(arr, sizeof(arr)/sizeof(arr[0]));

    return 0;
}

void insertionSort(int arr[], int length) {
    int val, temp;
    for(int i=1;i<length;i++){
        val = arr[i];
        temp = i;
        while(temp>0 && arr[temp-1]>val){
            arr[temp] = arr[temp-1];
            temp--;
        }
        arr[temp] = val;
    }
    printArray(arr, length);
}

void printArray(int arr[], int size) {
    for (int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

