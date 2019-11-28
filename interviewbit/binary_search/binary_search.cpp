#include <vector>
#include <iostream>

using namespace std;

int binarySearch(vector<int>& arr, int target);
void printVector(vector<int>& arr);

int main() {
    vector<int> arr = {2,17,23,35,41};
    printVector(arr);

    int target = 27;
    cout << "Target = " << target << endl;
    int index = binarySearch(arr, target);
    if (index==-1) {
        cout << "Target not found" << endl;
    } else {
        cout << "Target found at index = " << index << endl;
    }

    target = 35;
    cout << "Target = " << target << endl;
    index = binarySearch(arr, target);
    if (index==-1) {
        cout << "Target not found" << endl;
    } else {
        cout << "Target found at index = " << index << endl;
    }

    return 0;
}

int binarySearch(vector<int>& arr, int target) {
    int start = 0;
    int end = arr.size()-1;
    while (start<=end) {
        int mid = (start+end)/2;
        if (arr[mid]==target) {
            return mid;
        }
        
        if (arr[mid]<target) {
            start = mid+1;
        } else {
            end = mid-1; 
        }
    }

    return -1;
}

void printVector(vector<int>& arr) {
    for (int i=0;i<arr.size();i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}