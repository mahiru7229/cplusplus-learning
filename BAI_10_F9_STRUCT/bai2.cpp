#include <iostream>
#include <string>

using namespace std;
bool is_running = true;
struct Product{
    string name;
    double value;
    int quantity;
    Product(){

    }
    Product(string _name, double _value, int _quantity){
        name = _name;
        value = _value;
        quantity = _quantity;
    }

    friend istream& operator >> (istream& cin, Product& product){
        cout << "Ten san pham: ";
        cin.ignore();
        getline(cin, product.name);
        
        cout << "Gia tien: ";
        cin >> product.value;

        cout << "So luong: ";
        cin >> product.quantity;

        return cin;
    }
};

int size = 0;
void open_menu();
void list_products(Product* products, int size);
void add_products(Product *&products, int &size);
void delete_products(Product *&products, int &size);


int main()
{
    int menu_choice;
    Product *products = new Product[size];
    while (is_running){
        open_menu();
        cout <<"Chon: ";
        cin >> menu_choice;
        switch (menu_choice){
            case 1:
                list_products(products, size);
                break;
            case 2:
                add_products(products, size);
                break;
            case 3:
                delete_products(products, size);
                break;
            case 4:
                delete[] products;
                is_running = false;
                break;
            default:
                cout << "Khong hop le"<<endl;
        }
    }
    
    return 0;
}


void open_menu(){
    cout << "======MENU======" << endl;
    cout << "1. Xem danh sach san pham." << endl;
    cout << "2. Them san pham moi." << endl;
    cout << "3. Xoa san pham." << endl;
    cout << "4. Thoat." << endl;
}

void list_products(Product* products, int size){
    cout <<"Danh sach san pham." << endl;
    cout <<"STT | Ten | Gia tien | So luong"<<endl;
    for (int i = 0; i< size ; i++){
        cout << i+1<<" | "<<products[i].name << " | " << products[i].value << " | " << products[i].quantity << endl;
    }
    cout<<endl;
}

void add_products(Product *&products, int &size){
    Product new_product;
    cin >> new_product;
    Product* newProducts = new Product[size + 1];
    for (int i = 0; i < size; ++i) {
        newProducts[i] = products[i];
    }
    newProducts[size] = new_product;
    delete[] products; // Giải phóng bộ nhớ của mảng cũ
    products = newProducts;
    size++;
}

void delete_products(Product*& products, int& size) {
    list_products(products, size);

    if (size == 0) {
        cout << "Khong co san pham de xoa!" << endl;
        return;
    }

    int index;
    cout << "Chon san pham muon xoa (theo thu tu): ";
    cin >> index;

    if (index < 0 || index >= size) {
        cout << "Vi tri khong hop le!" << endl;
        return;
    }

    for (int i = index; i < size - 1; i++) {
        products[i] = products[i + 1];
    }

    size--;

    Product* newProducts = new Product[size];
    for (int i = 0; i < size; i++) {
        newProducts[i] = products[i];
    }

    delete[] products;
    products = newProducts;

    cout << "Da xoa!" << endl;
}
