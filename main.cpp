#include <iostream>
#include <cmath>
int main(){
    using namespace std;
    
    char op;
    double num1;
    double num2;
    double result;

    cout << "********CALCULATOR********\n";
    cout << "Nhap phep tinh muon thuc hien (+,-,x,/): ";
    cin >> op;
    cout << "********************************\n";
    cout << "Ban da chon: " << op << "\n";
    cout << "Nhap so dau tien: ";
    cin >> num1;
    cout << "Nhap so thu hai: ";
    cin >> num2;
    switch(op){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case 'x':
            result = num1*num2;
            break;
        case '/':
            result = num1/num2;
            break;
        default:
            result = -1;
            break;
    }
    cout << "Ket qua: " << result << "\n";
    cout << "**************************\n";
    return 0;
}