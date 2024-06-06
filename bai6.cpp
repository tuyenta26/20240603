#include <iostream>
#include <string.h>
using namespace std;

int countWords (char* str){
    int count = 0;
    bool tu = false;
    for (int i = 0; str[i] != '\0'; i++){
        if (isspace(str[i])){
            tu = false;
        } else {
            if (!tu){
                count++;
                tu = true;
            }
        }
    }
    return count;
}

int main(){
    char str[1000];
    cout << "Nhap chuoi: ";
    gets(str);
    int demSo = countWords(str);
    cout << "So luong tu trong chuoi: " << demSo << endl;

    return 0;

}