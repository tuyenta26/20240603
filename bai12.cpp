#include <iostream>
#include <cstring>
using namespace std;

void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void hoanVi(char *str, int l, int r) {
    if (l == r) {
        cout << str << endl; 
    } else {
        for (int i = l; i <= r; i++) {
            swap((str + l), (str + i));
            hoanVi(str, l + 1, r);
            swap((str + l), (str + i));
        }
    }
}

int main() {
    char str[100];

    cout << "Nhap chuoi: ";
    cin >> str;
    int n = strlen(str);
    cout << "Cac hoan vi cua chuoi la:" << endl;
    hoanVi(str, 0, n - 1);

    return 0;
}