// Nhập vào dãy gồm N số nguyên. Tìm giá trị nhỏ nhất và lớn nhất của dãy.
#include <iostream>

using namespace std;

int main(){

    int n, min, max;
    cout << "n = ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n ; i++){
        cin >>arr[i];
    }
    min = arr[0];
    max = arr[0];
    for (int i = 1; i < n ; i++){
        if (arr[i] < min){
            min = arr[i];
        }
    }
    for (int i = 1; i < n ; i++){
            if (arr[i] > max){
                max = arr[i];
            }
        }
    
    cout << "GTNN cua mang: "<< min<<endl;
    cout << "GTLN cua mang: "<< max<<endl;
    return 0;
}