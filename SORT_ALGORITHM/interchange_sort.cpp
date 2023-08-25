#include <iostream>
using namespace std;
int interchange_sort(int arr[], int n);
int swap(int &a, int &b);

int main(){
    int myArr[10];
    int n;
    cout <<"n = ";
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >>myArr[i];
    }
    interchange_sort(myArr, n);
    for (int i = 0; i < n; i++){
        cout << myArr[i]<<" ";
    }
    return 0;
}

int swap(int &a, int &b){
    int temp = b;
    b = a;
    a = temp;
}

int interchange_sort(int arr[], int n){
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if (arr[j] < arr[i]){
                swap(arr[j], arr[i]);
            }
        }
    }
}