#include <iostream>

int main(){
    int myArray[20];
    int n,x;
    std::cout <<"n = ";
    std::cin>>n;
    for (int i = 0; i < n; i++){
        std::cin >> myArray[i];
    }
    std::cout<<"x = ";
    std::cin >> x;
    for (int i = x; i < n - 1; i++){
        myArray[i] = myArray[i] + 1;
    }
    n--;
    std::cout<<"Mang sau khi xoa:";
    for (int i = 0; i < n; i++){
        std::cout << myArray[i] <<" ";
    }
}

