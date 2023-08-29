#include <iostream>

using namespace std;

const float PI = 3.14;

struct Circle{
    float radius;

    friend istream& operator >> (istream&is, Circle &circle){
        cout <<"Nhap ban kinh: ";
        is >> circle.radius;
        return is;
    }

    float chu_vi(){
        return radius*2*PI;
    }
    float dien_tich(){
        return radius*radius*PI;
    }
};


int main(){

    Circle c;

    cin >> c;
    cout << c.chu_vi()<<endl;
    cout << c.dien_tich()<<endl;


    return 0;
}