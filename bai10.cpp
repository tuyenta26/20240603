#include <iostream>
#include <string.h>
using namespace std;

int main (void) {
  char str[256];

  cout << "Nhap chuoi: ";
  gets(str);

  int length = strlen(str);
  int i, j;
  char temp;

  for (i = 0; i < length-1; i++) {
      for (j = i+1; j < length; j++) {
         if (str[i] > str[j]) {
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
         }
      }
  }
   
  cout << "Chuoi sau khi sap xep lai la: " << str;
  return 0;
}