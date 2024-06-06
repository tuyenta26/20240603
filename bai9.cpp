#include <iostream>
#include <string.h>
using namespace std;

void ho(char str[], int n) {
    int i = 0;
    while (str[i] != ' ' && str[i] != '\0') {
        cout << str[i];
        i++;
    }
    cout << endl; 
}

void ten(char str[], int n) {
    int i = 0;
    int pos = -1; 
    while (str[i] != '\0') {
        if (str[i] == ' ')
            pos = i;
        i++;
    }
    if (pos != -1) {
        pos++;
        while (str[pos] != '\0') {
            cout << str[pos];
            pos++;
        }
    }
    cout << endl;
}

void dem(char str[], int n) {
    int i = 0;
    int dauCachDau = -1;
    int dauCachCuoi = -1;

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            if (dauCachDau == -1) {
                dauCachDau = i;
            }
            dauCachCuoi = i;
        }
        i++;
    }

    if (dauCachDau != -1 && dauCachCuoi != -1 && dauCachDau != dauCachCuoi) {
        dauCachDau++;
        while (dauCachDau < dauCachCuoi) {
            cout << str[dauCachDau];
            dauCachDau++;
        }
    }
    cout << endl; 
}

int main() {
    char hoTen[50];
    cout << "Nhap ho ten: ";
    gets(hoTen);
    cout << "Ho la: ";
    ho(hoTen, 50);
    cout << "Ten dem la: ";
    dem(hoTen, 50);
    cout << "Ten la: ";
    ten(hoTen, 50);

    return 0;
}