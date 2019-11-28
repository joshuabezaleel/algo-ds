#include <vector>
#include <iostream>

using namespace std;

void quickSort(vector<int>& arr, int start, int end);
int partition(vector<int>& arr, int start, int end);
void printVector(vector<int>& arr);

int main() {
    vector<int> arr = {17,35,23,41,2};
    quickSort(arr, 0, arr.size());
    printVector(arr);
    return 0;
}

void quickSort(vector<int>& arr, int start, int end) {
    if (start<end) {
        int pIndex = partition(arr, start, end);
        quickSort(arr, start, pIndex-1);
        quickSort(arr, pIndex+1, end);
    }
}

int partition(vector<int>& arr, int start, int end) {
    int pivot = arr[end];
    int pIndex = start;
    for (int i=start;i<=end-1;i++) {
        if (arr[i]<=pivot) {
            int temp = arr[i];
            arr[i] = arr[pIndex];
            arr[pIndex] = temp;
            pIndex++;
        }
    }
    int temp = arr[pIndex];
    arr[pIndex] = arr[pivot];
    arr[pivot] = temp;
    return pIndex;
}

void printVector(vector<int>& arr) {
    for (int i=0;i<arr.size();i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}