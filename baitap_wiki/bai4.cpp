// Nhập vào dãy gồm N phần tử. Xuất ra màn hình dãy theo thứ tự đảo ngược.

#include <iostream>


using namespace std;

int main(){
    int n;
    cout << "n = ";
    cin >> n;

    int arr[n];
    for (int i = 0; i< n ; i++){
        cin >> arr[i];
    }

    for (int i = 0 ; i < n / 2; i++){
        int temp = arr[i];
        arr [i] = arr[n - 1 - i];
        arr [n - 1 - i] = temp;
    }
    cout << "Mang da duoc dao nguoc: ";
    for (int i = 0; i< n ; i++){
        cout << arr[i] <<" ";
    }

    return 0;
}