#include <iostream>
#include <string.h>
using namespace std;

int demTatCaKyTu ( char* str, int count[]){
    int length = strlen(str);
    for (int i = 0; i < 256; i++){
        count[i] = 0;
    }
    for (int i = 0; i < length; i++){
        count [(int) str[i]]++;
    }
}


int main(){
    char chuoiKyTu[256];
    cout << "Nhap chuoi ky tu: ";
    gets (chuoiKyTu);
    
    int count[256];
    demTatCaKyTu (chuoiKyTu,count);
    cout << "So lan xuat hien cua tung ky tu :" << endl;
    for (int i = 0; i < 256; i++){
        if (count[i] > 0){
            cout << (char) i << " :" << count[i] << endl;
        }
    }

    return 0;
}