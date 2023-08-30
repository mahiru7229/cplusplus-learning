// Nhập vào dãy gồm N phần tử và số K. Đếm xem dãy có bao nhiêu phần tử nhỏ hơn K.

#include <iostream>
using namespace std;

int main(){
    int n, k, count = 0;
    cout <<"n = ";
    cin >> n;
    int arr[n];
    cout <<"Nhap mang: ";
    for (int i = 0; i < n; i++){
        cin >>arr[i];
    }
    cout <<"k = ";
    cin >>k;
    for (int i = 0; i < n; i++){
        if (arr[i] < k ){
            count +=1;
        }
    }
    cout <<"So phan tu lon hon " <<k<< " la: " <<count;
    return 0;
}