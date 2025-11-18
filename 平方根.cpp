#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double a, x0, x1;
    cout << "请输入a的值：";
    cin >> a;

    x0 = a / 2;
    do {
        x1 = 0.5 * (x0 + a / x0);
        if (fabs(x1 - x0) < 1e-5) {
            break;
        }
        x0 = x1;
    } while (true);

    cout << "√" << a << "=" << fixed << setprecision(6) << x1 << endl;
    return 0;
}