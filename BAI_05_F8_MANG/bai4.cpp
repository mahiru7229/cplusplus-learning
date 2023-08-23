#include <iostream>
using namespace std;
int main(){
    int arr[10][10];
    int n,m,sum;
    sum = 0;
    cout << "n = ";
    cin >> n;
    cout << "m = ";
    cin >> m;
    if ((n>=2 && n <=10) && (m >=2 && m <=10)){
        for (int i = 0; i<n; i++){
            for (int j = 0; j<m; j++){
                cin >> arr[i][j];
            }
        }
        // Tinh hang dau tien va cuoi cung
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (i == 0 || i == n -1 || j == 0 || j==m-1){
                    sum += arr[i][j];
                }
            }
        }
        cout << sum<<endl;
    }
    return 0;
}