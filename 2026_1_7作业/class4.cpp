#include<iostream>
using namespace std;
class student {
private:int num;
	   int score;
public:int getNum() {
	return num;
}
	  int getScore() {
		  return score;
	  }
	  student(int n, int s):num(n),score(s){}
};
void max(student* p, int n) {
	student maxStu = *p;
	// 遍历数组，从第二个学生开始比较
	for (int i = 1; i < n; i++) {
		// p+i 是指向第i个学生对象的指针，-> 访问指针指向对象的成员函数
		if ((p + i)->getScore() > maxStu.getScore()) {
			maxStu = *(p + i); // 更新最高成绩的学生
		}
	}
	cout << "成绩最高的学生学号：" << maxStu.getNum() << endl;
}
int main(){
	student stu[5] = {
	student(1,100),
	student(2,200),
	student(3,300),
	student(4,400),
	student(5,500), };
	max(stu, 5);
	return 0;
}