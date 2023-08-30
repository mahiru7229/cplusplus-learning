// Nhập vào dãy gồm N số nguyên. Xuất ra màn hình dãy vừa nhập.
#include <iostream>
using namespace std;

int main(){
    int n;
    cout <<"n = ";
    cin >> n;
    int arr[n];
    cout <<"Nhap mang: ";
    for (int i = 0; i < n; i++){
        cin >>arr[i];
    }
    cout <<"Mang da nhap: ";
    for (int i = 0; i < n; i++){
        cout <<arr[i]<<" ";
    }
    return 0;
}