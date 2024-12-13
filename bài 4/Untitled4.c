#include <stdio.h>

int main() {
    
    string input;
    cout << "Nhap chuoi: ";
    cin >> input;

    map<char, int> frequency;

    for (char c : input) {
        frequency[c]++;
    }

    cout << "So lan xuat hien cua tung ky tu:\n";
    for (const auto &pair : frequency) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
