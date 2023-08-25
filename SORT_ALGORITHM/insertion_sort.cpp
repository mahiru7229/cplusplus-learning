#include <iostream>
// Insertion Sort
void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; ++i) {
        int key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && key < arr[j]) {
            arr[j + 1] = arr[j];
            j--;
        }
        
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {5, 2, 9, 3, 1, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    insertionSort(arr, size);
    
    std::cout << "Sorted array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    
    return 0;
}
