#include <iostream>
using namespace std;
int yue(int a, int b) {
	if (a < b) {
		int temp = a;
		a = b;
		b = temp;
		int c = a % b;
		if (c == 0)
			return b;
		else
			return yue(b, c);
	}
	else {
		int c = a % b;
		if (c == 0)
			return b;
		else
			return yue(b, c);
	}
}
int bei(int a, int b) {
int	tempo = a * b/(yue(a,b));
return tempo;
}
int main() {
	int x,y;
	cout << "输入两个自然数" << endl;
	cin >> x>> y;
	if (y <= 0 || x < 0) {
		cout << "请重新输入" << endl;
	}
	else
	cout << "最大公因数为" <<yue(x,y)<< endl;
	cout << "最小公倍数为" << bei(x, y) << endl;
	return 0;
}
