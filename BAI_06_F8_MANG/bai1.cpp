#include <iostream>
using namespace std;

int main(){
    int arr[10];
    int n;
    cout << "n = ";
    cin >> n;
    cout << "Nhap mang: ";
    if (n >=2 && n <=10){
        for (int i = 0; i< n; i++){
            cin >> arr[i];
        }
        for (int i = n - 1; i >0; i--){
            for (int j = 0; j < i; j++){
                if (arr[j] < arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
        cout<<"Mang sau khi sap xep: ";
        for (int i = 0; i< n; i++){
            cout << arr[i] <<" ";
        }
    }
    return 0;
}