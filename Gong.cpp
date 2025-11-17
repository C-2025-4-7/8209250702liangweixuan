#include <iostream>
using namespace std;

int main() {
    int a, b, m, n, temp;
    cout << "请输入两个正整数：";
    cin >> a >> b;
    m = a;
    n = b;
    while (b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }
    int lcm = (m * n) / a;
    cout << "最大公约数：" << a << endl;
    cout << "最小公倍数：" << lcm << endl;
    return 0;
}