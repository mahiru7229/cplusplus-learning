#include <iostream>

int main(){

    int arr[10];
    int n;
    int lon_nhat = 0;
    std::cout << "n = ";
    std::cin >>n;
    if (n > 0 && n<=10){
        std::cout <<"Nhap mang: ";
        for (int i = 0;i <n ; i++){
            std::cin >> arr[i];
        }
        for (int i = 0; i < n; i++){
            if(arr[i] > lon_nhat){
                lon_nhat = arr[i];
            }
        }
    }
    std::cout << "Gia tri lon nhat la: "<<lon_nhat;


    return 0;
}