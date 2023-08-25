#include <iostream>
using namespace std;

int main(){
    int n,x; 
    cout <<"n = ";
    cin >>n; // Khai bao mang co bao nhieu gia tri
    int *a = new int[n]; // Tao con tro luu tru mang co n gia tri
    for (int i = 0; i < n; i++){ // Nhap n gia tri vao con tro a
        cin >> a[i];
    }
    cout <<"x = ";
    cin >>x;// Nhap so x them vao cuoi mang a

    int *temp_arr = new int[n+1]; // Tao mang temp_arr voi so phan tu la n + 1 (vi them 1 so nua nen phai lon hon)

    for (int i = 0; i < n; i++){ // Sao chep toan bo gia tri tu con tro a
        temp_arr[i] = a[i];
    }
    // Them gia tri x vao cuoi mang temp_arr
    temp_arr[n] = x;
    delete[] a;// Xoa vung nho a da dung phia tren

    a = temp_arr; // Gan cho no vung nho moi co n + 1 phan tu
    cout <<"Mang sau khi them: "; // In mang co n + 1 phan tu ra man hinh
    for (int i = 0; i < n+1; i++){
        cout << a[i] <<" ";
    }
    return 0;
}