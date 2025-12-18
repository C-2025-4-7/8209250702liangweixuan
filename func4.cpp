#include<iostream>
#include"mytriangle.h.h"
using namespace std;
int main() {
	int a, b, c;
	cout << "输入三条边长" << endl;
	cin >> a >> b >> c;
	if (is_valid(a, b, c)) {
		cout << area(a, b, c) << endl;
	}
	else {
		cout << "输入三条边长" << endl;
		cin >> a >> b >> c;
	}
	return 0;
}	