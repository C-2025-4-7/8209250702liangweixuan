#include<iostream>
using namespace std;
int peach(int count,int day) {
	if (day == 1) {
		return count;
}
	return peach((count + 1) * 2, day - 1);
}
int main() {
	cout << peach(1,10) << endl;
	return 0;
}