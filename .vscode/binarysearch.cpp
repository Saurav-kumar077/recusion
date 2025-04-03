#include<iostream>
using namespace std;

bool Binarysearch(int *arr, int s, int e, int key) {
    if (s > e) {//Base fumction
        return false; 
    }

    int mid = s + (e - s) / 2;

    if (arr[mid] == key) {
        return true; 
    }
    
    if (arr[mid] < key) { 
        return Binarysearch(arr, mid + 1, e, key);
    } else { 
        return Binarysearch(arr, s, mid - 1, key);
    }
}

int main() {
    int key;
    cout << "Enter the key you want to search: ";
    cin >> key;

    int arr[6] = {1, 3, 5, 6, 7, 9}; 
    int size = 6;

    bool found = Binarysearch(arr, 0, size - 1, key);

    if (found) {
        cout << "Key is present!" << endl;
    } else {
        cout << "Key is not available in the given array." << endl;
    }

    return 0;
}
