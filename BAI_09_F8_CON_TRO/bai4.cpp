#include <iostream>
using namespace std;
void bubble_sort(int arr[], int n);
void swap(int &a, int&b);

int main(){
    int n;
    cout <<"n = ";
    cin >> n;
    int *arr = new int[n];
    cout <<"Nhap mang: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    bubble_sort(arr, n);

    cout << "Mang sau khi sap xep: ";

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}


void bubble_sort(int arr[], int n){
    for (int i = n - 1; i > 0; i--){
        for (int j = 0; j < i; j++){
            if (arr[j] > arr[i]){
                swap(arr[j], arr[i]);
            }
        }
    }
    }

void swap(int &a, int&b){
    int temp = b;
    b = a;
    a = temp;
}