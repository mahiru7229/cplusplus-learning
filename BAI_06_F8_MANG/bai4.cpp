#include <iostream>
using namespace std;

int main(){
    int n,m,arr[10][10],odd_sum;
    odd_sum = 0;
    cout <<"n = ";
    cin >> n;
    cout <<"m = ";
    cin >> m;
    if (n>0 && n <=10 && m>0 && m<=10){
        cout <<"Nhap ma tran: ";
        for(int i = 0; i <n; i++){
            for(int j = 0; j <m; j++){
                cin >> arr[i][j];
            }
        }
        // Truy xuat tung so trong mang
        for(int i = 0; i <n; i++){
            for(int j = 0; j <m; j++){
                if (arr[i][j] %2 ==1){
                    odd_sum += arr[i][j];
                }
            }
        }
        cout <<"Tong cac so le la: "<<odd_sum;
    }
    return 0;
}