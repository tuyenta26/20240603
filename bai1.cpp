#include <iostream>
#include <string.h>
using namespace std;

int daoNguocChuoi (char* str){
    int length = strlen(str);
    int start = 0;
    int end = length - 1;
    while (start < end){
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main(){
    char kyTu[100];
    cout << "Nhap chuoi :";
    gets (kyTu);
    daoNguocChuoi (kyTu);
    cout << "Chuoi dao nguoc : " << kyTu << endl;

    return 0;
}
