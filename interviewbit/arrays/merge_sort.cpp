#include <vector>
#include <iostream>

using namespace std;

void mergeSort(vector<int>& arr);
void merge(vector<int>& left, vector<int>& right, vector<int>& arr);
void printVector(vector<int>& arr);

int main() {
    vector<int> arr = {17,35,23,41,2};
    mergeSort(arr);
    printVector(arr);
    return 0;
}

void mergeSort(vector<int>& arr) {
    if (arr.size() <= 1) {
        return;
    }

    int mid = arr.size()/2;
    vector<int> left;
    vector<int> right;

    for (int i=0;i<=mid-1;i++) {
        left.push_back(arr[i]);
    }
    for (int i=mid;i<=arr.size()-1;i++) {
        right.push_back(arr[i]);
    }
    
    mergeSort(left);
    mergeSort(right);
    merge(left,right,arr);
}

void merge(vector<int>& left, vector<int>& right, vector<int>& arr) {
    int nL = left.size();
    int nR = right.size();
    int i=0,j=0,k=0;

    while (i<nL && j<nR) {
        if (left[i]<=right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while (i<nL) {
        arr[k] = left[i];
        k++;
        i++;
    }
    while (j<nR) {
        arr[k] = right[j];
        k++;
        j++;
    }
}

void printVector(vector<int>& arr) {
    for (int i=0;i<arr.size();i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}