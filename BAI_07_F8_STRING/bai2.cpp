#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    int i = 0;

    cout <<"Nhap chuoi: ";
    getline(cin, str);
    while (i < str.length() - 1){
        if (str[i] == ' ' && str[i + 1]==' '){
            str.erase(i, 1);
        }else{
            i++;
        }
    }

    cout <<"Ket qua: "<< str;
    return 0;
}