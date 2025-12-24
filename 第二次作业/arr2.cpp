#include <iostream>
using namespace std;
int main()
{
	double num;
	bool change=true;
	cout << "输入10个双精度数" << endl;
	double arr[10];
	for (int i = 0; i < 10;i++)
	{
		cin >> num;
		arr[i] = num;
	}
	do {
		change = false;
		for (int k = 0;k < 9;k++) {
			if (arr[k] > arr[k + 1]) {
				swap(arr[k], arr[k + 1]);
				change = true;
			}
}
	} while (change);
	for (int fuck = 0;fuck < 10;fuck++) {
		cout << arr[fuck]<<endl;
	}
	return 0;
}