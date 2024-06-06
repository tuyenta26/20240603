#include <iostream>
#include <string.h>
using namespace std;

bool doiXung(char* str){
    int left = 0;
    int right = strlen(str) - 1;
    while (left < right){
        if (tolower((char)str[left]) != tolower((char)str[right])){
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}

int main(){
    char str[1000];
    cout << "Nhap chuoi: ";
    gets (str);
    if (doiXung(str)){
        cout << "Chuoi doi xung" << endl;
    } else {
        cout << "Chuoi khong doi xung" << endl;
    }
    return 0;
}