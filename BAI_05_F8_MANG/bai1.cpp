#include <iostream>


int main(){

    int arr[10][10];
    int n, m,result;
    result = 0;
    std::cout << "n = ";
    std::cin >> n;
    std::cout << "m = ";
    std::cin >> m;
    // Tao mang
    if ((n > 0 && n<=10) && (m > 0 && m <= 10)){
        std::cout << "Nhap mang: ";
        for (int i = 0; i < n ; i++){
            for (int j = 0; j<m; j++){
                std::cin >> arr[i][j];
            }
        }
        // Duyet qua tung phan tu cua mang
        for (int i = 0; i < n ; i++){
            for (int j = 0; j<m; j++){
                result += arr[i][j];
            }
        }
    }
    std::cout << "Tong cac phan tu trong mang la: " << result;
    
    return 0;
}