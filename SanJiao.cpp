#include <iostream>
using namespace std;
int main() {
	double a, b, c;
	double s;
	cout << "请输入三角形的三条边长：";
	cin >> a >> b >> c;
	s = a + b + c;
	if(a+b>c&&a+c>b&&b+c>a)
	{
		if (a == b || b == c || a == c)
			cout << "是等腰三角形" << ",周长为" << s << endl;
		else
			cout << "周长为" << s << endl;
	}
	else
		cout << "不能构成三角形" << endl;
	return 0;
}