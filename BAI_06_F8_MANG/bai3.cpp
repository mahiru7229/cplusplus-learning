#include <iostream>
using namespace std;

int main(){
    int n,m,matrix_1[10][10],matrix_2[10][10];
    cout <<"n = ";
    cin >> n;
    cout <<"m = ";
    cin >> m;
    cout << "Nhap ma tran 1: ";
    for (int i=0; i <n;i++){
        for (int j=0; j<m;j++){
            cin >> matrix_1[i][j];
        }
    }
    cout << "Nhap ma tran 2: ";
    for (int i=0; i <n;i++){
        for (int j=0; j<m;j++){
            cin >> matrix_2[i][j];
        }
    }
    cout << "Tong 2 ma tran: "<<endl;
    for (int i=0; i <n;i++){
        for (int j=0; j<m;j++){
            cout<< matrix_1[i][j] + matrix_2[i][j]<<" ";
        }
        cout << endl;
    }
    
    return 0;
}