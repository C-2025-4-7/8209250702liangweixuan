#include<iostream>	
using namespace std;
int main()
{
	double a, b;
	char jisuan;
	cout << "请输入两个数字（数字 计算符 数字）" << endl;
	cin >> a >>jisuan>> b;
	switch (jisuan) {
	case '+':
		cout << a << "+" << b << "=" << a + b << endl;
		break;
	case'-':
		cout << a << "-" << b << "=" << a - b << endl;
		break;
	case'*':
		cout << a << "*" << b << "=" << a * b << endl;
		break;
	case'/':
		if (b != 0)
			cout << a << "/" << b << "=" << a / b << endl;
		else
			cout << "错误,除数不能为零" << endl;
	case'%':
		cout << a << "%" << b << "=" << (int)a % (int)b << endl;
	}
	return 0;
}