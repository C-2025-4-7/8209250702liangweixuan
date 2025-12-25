#include <iostream>
#include <cctype>  
#include <cstring> 
using namespace std;
int parseHex(const char* const hexString) {
    if (hexString == nullptr || *hexString == '\0') {
        return 0;
    }

    int decimal = 0;       
    const char* p = hexString; 

    if (strlen(p) >= 2 && p[0] == '0' && (p[1] == 'x' || p[1] == 'X')) {
        p += 2; 
    }


    while (*p != '\0') {
        char c = *p;
        int digit;


        if (isdigit(c)) {
            digit = c - '0'; 
        }
        else if (isupper(c)) {
            digit = 10 + (c - 'A'); 
        }

        else if (islower(c)) {
            digit = 10 + (c - 'a'); 
        }
        else {
            cout << "错误：输入包含非法字符 '" << c << "'" << endl;
            return -1;
        }

        decimal = decimal * 16 + digit;
        p++; 
    }

    return decimal;
}


int main() {
    char input[100];
    cout << "\n请输入一个十六进制字符串（可带0x前缀）：";
    cin >> input;
    int manualResult = parseHex(input);
    if (manualResult != -1) {
        cout << "转换后的十进制数：" << manualResult << endl;
    }
    else {
        cout << "转换失败！" << endl;
    }

    return 0;
}