// Nhập vào dãy gồm N phần tử. Liệt kê các phần tử âm của dãy.
#include <iostream>

using namespace std;

int main(){
    int n;
    cout <<"n = ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n ; i++){
        cin >>arr[i];
    }
    cout<<"Cac phan tu am cua day: ";
    for (int i = 0; i < n ; i++){
        if (arr[i] < 0){
            cout << arr[i]<<" ";
        }
    }
    return 0;
}