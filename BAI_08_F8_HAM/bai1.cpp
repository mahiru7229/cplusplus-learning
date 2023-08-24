#include <iostream>
using namespace std;

bool is_prime(int);



int main(){
    int n;
    cout <<"n = ";
    cin >> n;
    if(is_prime(n)){
        cout << n << " la so nguyen to";
    }else{
        cout << n << " khong phai la so nguyen to";
    }
    return 0;
}


bool is_prime(int n){
    if (n==0 || n==1){
        return 0;
    }
    
    for (int i = 2; i<n; i++){
        if(n %i ==0){
            return 0;
        }
    }
    return 1;
}
