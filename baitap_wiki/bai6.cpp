// Nhập vào dãy gồm N số nguyên. In ra các phần tử là ước của phần tử đầu tiên.

#include <iostream>

using namespace std;

int main(){
    int n;
    cout <<"n = ";
    cin >> n;
    int arr[n];
    cout<<"Nhap mang: ";
    for(int i = 0; i < n; i++){
        cin >>arr[i];
    }
    int uoc_so = arr[0];
    cout <<"Cac phan tu la uoc so cua phan tu dau tien: ";
    for (int i = 1; i < n; i ++){
        if(uoc_so % arr[i] == 0){
            cout << arr[i] <<" ";
        }
    }
    return 0;
}