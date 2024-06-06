#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char hoTen[40];
    cout << "Nhap ho ten: ";
    gets (hoTen);
    char *hoTenLwr = strlwr(hoTen);
    hoTenLwr[0] -= 32;
    int length = strlen (hoTen);
    for (int i = 0; i < strlen(hoTen); i++){
        if (hoTen[i] == ' '){
            hoTenLwr[i + 1] -= 32;
        }

    }
    cout << hoTenLwr;


    return 0;
}