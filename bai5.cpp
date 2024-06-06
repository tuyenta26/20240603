#include <iostream>
#include <string.h>
using namespace std;

void title (char* str){
    bool inHoa = true;
    for (int i = 0; str[i] != '\0'; i++){
        if (isspace(str[i])){
            inHoa = true;
        } else if (inHoa){
            str[i] = toupper(str[i]);
            inHoa = false;
        } else {
            str[i] = tolower(str[i]);
        }
    }
}

int main(){
    char str[1000];
    cout << "Nhap chuoi: ";
    gets(str);
    title(str);
    cout << "Chuoi da chuyen doi: '" << str << "'" << endl;
    return 0;
}