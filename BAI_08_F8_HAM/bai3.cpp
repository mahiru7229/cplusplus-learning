#include <iostream>

using namespace std;
unsigned long long giaiThuaVongLap(int n);
unsigned long long giaiThuaDeQuy(int n);


int main(){
    int n;
    cout <<"n = ";
    cin >> n;
    cout << n<<"! (Vong lap) = "<< giaiThuaVongLap(n)<<endl;
    cout << n<<"! (De quy) = "<< giaiThuaDeQuy(n)<<endl;
}



unsigned long long giaiThuaVongLap(int n){
    unsigned long long giaithua = 1;
    if (n == 0 || n==1){
        return 1;
    }
    for (int i = n; i >1;i--){
        giaithua = giaithua*i;
    }
    return giaithua;
}

unsigned long long giaiThuaDeQuy(int n){
    if (n==0 || n == 1){
        return 1;
    }
    return n*giaiThuaDeQuy(n-1);
}