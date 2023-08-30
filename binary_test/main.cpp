#include <iostream>
#include <fstream>

int main() {
    // Mở tập tin nhị phân để ghi
    std::ofstream outFile("data.bin", std::ios::binary);

    if (!outFile) {
        std::cerr << "That bai" << std::endl;
        return 1;
    }

    // Dãy byte mà bạn muốn ghi vào tập tin
    unsigned char byteArray[] = {0x48, 0x65, 0x6C, 0x6C, 0x6F}; // "Hello"

    // Sử dụng hàm write để ghi dữ liệu byte vào tập tin
    outFile.write(reinterpret_cast<char*>(byteArray), sizeof(byteArray));

    // Đóng tập tin sau khi hoàn thành việc ghi
    outFile.close();

    std::cout << "Thanh cong" << std::endl;

    return 0;
}
