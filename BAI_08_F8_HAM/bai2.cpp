#include <iostream>

using namespace std;

int tinhTongDaySoVongLap(int n);
int tinhTongDaySoDeQuy(int n);
bool is_prime(int n);

int main(){
    int n;
    cout <<"n = ";
    cin >> n;
    cout << "Ket qua (Vong lap) : "<< tinhTongDaySoVongLap(n)<<endl;
    cout << "Ket qua (De quy) : "<< tinhTongDaySoDeQuy(n)<<endl;
    return 0;
}

bool is_prime(int n){
    if(n==0 || n==1){
        return 0;
    }
    for (int i = 2; i <n ; i++){
        if (n %i==0){
            return 0;
        }
    }
    return 1;
}
// Vong lap
int tinhTongDaySoVongLap(int n){
    int sum = 0;
    for (int i = 2; i <=n; i++){
        if (is_prime(i)){
            sum += i;
        }
    }
    return sum;
}
// De quy
int tinhTongDaySoDeQuy(int n){
    if (n == 1){
        return 0;
    }
    if (is_prime(n)){
        return n + tinhTongDaySoDeQuy(n-1);
    }else{
        tinhTongDaySoDeQuy(n-1);
    }
    
}