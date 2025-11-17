#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float price = 0.8;
    int quantity = 2;
    int days = 0;
    float total_cost = 0;

    while (quantity <= 100)
    {
        total_cost += price * quantity;
        quantity *= 2;
        days++;
    }
    cout << "每天平均花: " << total_cost / days << "元" << endl;
    return 0;
}
