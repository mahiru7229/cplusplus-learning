#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    int i = 0;
    int j = 0;
    cout <<"Nhap chuoi: ";
    getline(cin, str);
    while (i < str.length()-1){
        str[i] = tolower(str[i]);
        i++;
    }
    // Viet hoa chu cai dau tien
    if (str[0]>96 && str[0]< 123){
        str[0] = str[0] - 32;
    }
    // Viet hoa chu cai sau dau cach
    while (j < str.length() -1){
        if(str[j]==' ' && str[j+1] > 96 && str[j+1]< 123){
            str[j+1] = str[j+1] - 32;
        }
        j++;
    }
    cout <<"Ket qua: "<<str;
    return 0;
}