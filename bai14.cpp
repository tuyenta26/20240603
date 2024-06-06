#include <iostream>
#include <cstring>
using namespace std;
string dinhDang(string so)
{
    string soDinhDang = "";
    for (int i = 0; i < so.length(); i++)
    {
        if (isdigit(so[i]))
        {
            soDinhDang += so[i];
        }
    }

    if (soDinhDang.length() != 10)
    {
        return 0;
    }

    string formatted = soDinhDang.substr(0, 3) + "-" +
                       soDinhDang.substr(3, 3) + "-" +
                       soDinhDang.substr(6, 4);

    return formatted;
}

int main()
{
    string phoneNumber;
    cout << "Nhap so dien thoai: ";
    cin >> phoneNumber;

    string formatted = dinhDang(phoneNumber);
    cout << "So dien thoai sau khi dinh dang: " << formatted << endl;

    return 0;
}