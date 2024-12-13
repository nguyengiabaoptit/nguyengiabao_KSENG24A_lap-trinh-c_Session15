#include <stdio.h>

int main(){

string capitalizeWords(string input) {
    bool capitalize = true; 

    for (size_t i = 0; i < input.length(); i++) {
        if (isspace(input[i])) {
            capitalize = true; 
        } else if (capitalize && isalpha(input[i])) {
            input[i] = toupper(input[i]);
            capitalize = false; 
        } else {
            input[i] = tolower(input[i]); 
        }
    }

    return input;
}

int main() {
    string input;

   
    cout << "Nhap mot chuoi: ";
    getline(cin, input);

   
    string result = capitalizeWords(input);
    cout << "Chuoi sau khi viet hoa chu cái dau: " << result << endl;

    return 0;
}
