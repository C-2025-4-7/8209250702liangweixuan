#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char c;
    int letter = 0, space = 0, digit = 0, other = 0;

    cout << "请输入一行字符：";
    while ((c = cin.get()) != '\n')
    {
        if (isalpha(c))
            letter++;
        else if (c == ' ')
            space++;
        else if (isdigit(c))
            digit++;
        else
            other++;
    }

    cout << "英文字母：" << letter << endl;
    cout << "空格：" << space << endl;
    cout << "数字：" << digit << endl;
    cout << "其他字符：" << other << endl;

    return 0;
}