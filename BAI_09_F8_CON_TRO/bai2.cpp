#include <iostream>

using namespace std;

int main(){
    int n,x;
    cout << "n = ";
    cin >> n;
    int *arr = new int[n];
    cout<< "Nhap mang: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "x = ";
    cin >> x;
    if (x>=0 && x < n){
        for (int i = x; i < n-1 ; i++){
            arr[i] = arr[i+1];
        }
        int *new_arr = new int[n-1];
        for (int i = 0; i < n- 1; i++){
            new_arr[i] = arr[i];
        }

        delete[] arr;
        arr = new_arr;
        delete[] new_arr;
        cout <<"Mang sau khi xoa: ";
        for (int i = 0; i < n - 1; i++){
            cout << arr[i] <<" ";
        }
    }else{
        cout <<"Mang sau khi xoa: ";
        for (int i = 0; i < n; i++){
            cout << arr[i] <<" ";
        }
        delete[] arr;
    }
    



    

    return 0;
}