#include <iostream>
using namespace std;


void swap(int &a, int&b);
void bubble_sort(int arr[], int n);


int main(){
    int myArr[10];
    int n;
    cout << "n = ";
    cin >> n;

    for (int i = 0; i < n ; i++){
        cin >> myArr[i];
    }
    bubble_sort(myArr, n);
    for (int i = 0; i < n ; i++){
        cout << myArr[i]<<" ";
    }


    return 0;
}

void swap(int &a, int&b){
    int temp = b;
    b = a;
    a = temp;
}

void bubble_sort(int arr[], int n){
    for(int i = n - 1; i > 0; i--){
        for (int j = 0; j < i; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}