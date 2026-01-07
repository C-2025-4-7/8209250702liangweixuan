#include<iostream>
using namespace std;
class Time             
{
private:             
	int hour;
	int minute;
	int sec;
public:void setTime(int h, int m, int s) {
	cout << "请输入时间（时 分 秒）：";
	cin >> h >> m >> s;
	hour = h;
	minute = m;
	sec = s;
}
	  void showTime() {
		  cout << "时间是：" << hour << "：" << minute << "：" << sec << endl;
	  }
};
int main()
{
	Time t1;           //定义t1为Time类对象
	t1.setTime(0, 0, 0); //调用成员函数设置时间
	t1.showTime();
	return 0;
}