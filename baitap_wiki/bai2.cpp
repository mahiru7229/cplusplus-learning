// Nhập vào dãy gồm N số nguyên. Đếm số lượng phần tử chẵn và tính tổng các phần tử lẻ.
#include <iostream>

using namespace std;

int main() {
    int n, even_count = 0, odd_sum = 0;
    cout <<"n = ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n ; i++){
        cin >>arr[i];
    }

    for(int i = 0; i < n ; i++){
        if (arr[i] % 2 ==0){
            even_count+=1;
        }else{
            odd_sum += arr[i];
        }
    }

    cout <<"So luong phan tu chan: "<<even_count<<endl;
    cout <<"Tong cac phan tu le: "<< odd_sum<<endl;


    return 0;
}