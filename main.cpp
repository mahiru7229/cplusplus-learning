#include <iostream>

int main()
{
    int n;
    char characters[10];

    std::cin >> n;

    for (int i = 0 ; i < n; i++){
        std::cin >> characters[i];
    }
    // bubble sort
    for (int i = n - 1; i > 0; i--){
        for (int j = 0; j < i; j++){
            if (characters[j] > characters[j+1]){
                char temp = characters[j];
                characters[j] = characters[j+1];
                characters[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++){
        std::cout << characters[i] <<" ";
    }
    return 0;
}
