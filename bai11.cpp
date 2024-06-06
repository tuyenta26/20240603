#include <iostream>
#include <string.h>
using namespace std;

void CamelCase(char str[]) {
    int length = strlen(str);
    char result[256] = {0};
    int j = 0;
    bool vietHoa = false;

    for (int i = 0; i < length; i++) {

        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            vietHoa = true;
        } else {
            if (vietHoa && isalpha(str[i])) {
                result[j++] = toupper(str[i]);  
                vietHoa = false;
            } else {
                result[j++] = str[i];
            }
        }
    }
    strcpy(str, result);
}

int main() {
    char str[256];

    cout << "Nhap chuoi: ";
    gets(str);
    CamelCase(str);
    cout << "Chuoi camelCase: " << str << endl;

    return 0;
}