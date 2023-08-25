#include <iostream>

using namespace std;

int main(){
    int n,y,x;
    cout <<"n = ";
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i< n; i++){
        cin >> arr[i];
    }
    cout <<"y = ";
    cin >> y;

    cout <<"x = ";
    cin >> x;

    int *new_arr = new int[n+1];

    for (int i = 0; i< n+1; i++){
        new_arr[i] = arr[i];
    }

    delete[] arr;
    int last = new_arr[n];

    // Code dich chuyen tao khoang trong de them so y vao vi tri x
    for (int i = n; i > x; i--) {
        new_arr[i] = new_arr[i - 1];
    }

    new_arr[x] = y;

    cout<<"Mang sau khi them: ";
    for (int i = 0; i < n+1; i++){
        cout << new_arr[i] <<" ";
    }

    delete[] new_arr;
    return 0;
}