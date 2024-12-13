#include <stdio.h>

int main() {
    
    std::string str = "hello world";
    char ch;

    std::cout << "Nhap vao mot ky tu: ";
    std::cin >> ch;

    std::string result = "";
    for (char c : str) {
        if (c != ch) {
            result += c;
        }
    }
    std::cout << "Chuoi sau khi xoa ky tu \"" << ch << "\": " << result << std::endl;

    return 0;
}
