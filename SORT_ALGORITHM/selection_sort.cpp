#include <iostream>
using namespace std;
void swap(int &a, int &b);
void selection_sort(int arr[], int n);

int main(){
    int myArr[10];
    int n;

    cout << "n = ";
    cin >> n;

    for (int i = 0; i<n; i++){
        cin >>myArr[i];
    }
    selection_sort(myArr, n);
    for (int i = 0; i<n; i++){
        cout << myArr[i] <<" ";
    }
}


void swap(int &a, int &b){
    int temp = b;
    b = a;
    a = temp;
}

void selection_sort(int arr[], int n){
    for(int i = 0; i<n -1;i++){
        int min= i ;
        for (int j = i + 1; j < n; j++){
            if (arr[j]< arr[min]){
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
}