#include <iostream>

int main(){
    int arr[10][10];
    int n,m;
    int lon_nhat[10];
    std::cout << "n = ";
    std::cin >> n;
    std::cout << "m = ";
    std::cin >> m;
    if ((n > 0 && n<=10) && (m > 0 && m <= 10)){
        std::cout << "Nhap mang: ";
        for (int i = 0; i < n;i++){
            for (int j = 0; j < m; j++){
                std::cin >> arr[i][j];
            }
        }
        std::cout <<"Cac phan tu lon nhat la: ";
        for (int i = 0; i < n;i++){
            int highest= arr[i][0];
            for (int j = 0; j < m; j++){
                if (arr[i][j] > highest){
                    highest = arr[i][j];
                }
            }
            std::cout << highest <<" ";
        }
    }



    return 0;
}