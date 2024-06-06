#include <iostream>
#include <string.h>
using namespace std;

void boKhoangTrang (char* str){
    int n = strlen(str);
    if ( n == 0) return;
    int i = 0, j = 0;
    while (isspace(str[i])) i++;

    while (i < n){
        if (!isspace(str[i])){
            str[j++] = str[i++];
        } else {
            str[j++] = ' ';
            while (isspace(str[i])) i++;
        }
    }
    if (j > 0 && str[j-1] == ' ') j--;
}
int main(){
    char str[1000];
    cout << "Nhap chuoi:" ;
    gets (str);
    boKhoangTrang(str);
    cout << "Chuoi da xu ly : '" << str << "'" << endl;
    return 0;

}

