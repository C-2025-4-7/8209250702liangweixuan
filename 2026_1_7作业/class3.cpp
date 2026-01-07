#include<iostream>
using namespace std;
class CFZ {
private:
	int length;
	int width;
	int height;
public:
	void setAll(int l, int w, int h) {
		cout << "请输入长,宽,高" << endl;
		cin >> l >> w >> h;
		length = l;
		width = w;
		height = h;
	}
	void displayVolume() {
		cout<<endl<<length * width * height<<endl;
	}
};
int main() {
	CFZ box1, box2, box3;
	box1.setAll(0,0,0);
	box2.setAll(0,0,0);
	box3.setAll(0,0,0);
	box1.displayVolume();
	box2.displayVolume();
	box3.displayVolume();
	return 0;
}