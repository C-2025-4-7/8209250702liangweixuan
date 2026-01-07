#include<iostream>
using namespace std;
class Point {
private:int x;
	   int y;
public:
	Point(int x = 60, int y = 80) : x(x), y(y) {}
	void setPoint(int i, int j) {
		cout << "分别输入x,y的改变值" << endl;
		cin >> i >> j;
		x += i;
		y += j;
	};
	void display() {
		cout <<"("<< x << "," << y<<")" << endl;
	}
};
int main() {
	Point obj;
	obj.setPoint(0,0);
	obj.display();
	return 0;
}