// Nhập vào dãy gồm N phần tử. Sắp xếp dãy đó thành một dãy tăng dần.
// Bubble Sort

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "n = ";
    cin >> n;
    int arr[n];
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    // Bubble Sort

    for (int i = n - 1; i > 0 ; i--){
        for (int j = 0; j < i;j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<"Mang da sap xep: ";
    for (int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
