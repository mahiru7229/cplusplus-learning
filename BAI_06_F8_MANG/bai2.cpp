#include <iostream>
using namespace std;
int main(){
    int n,k, arr[10];
    int x,y;
    cout << "n = ";
    cin >> n;
    cout <<"Nhap mang: ";
    for (int i = 0; i<n;i++){
        cin >> arr[i];
    }
    cout <<"k = ";
    cin >>k;
    for (int i = 0; i<n; i++){
        for (int j = 0; j < n; j++){
            if (i !=j && arr[i]+arr[j]== k){
                x= i;
                y=j;
            }
        }
    }
    cout <<"Ket qua: "<<y<<" "<<x;


    return 0;
}