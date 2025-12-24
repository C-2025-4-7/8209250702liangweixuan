#include<iostream>
using namespace std;
int main() {
	int	arr[10];
	int sus = 0;
	int num;
	cout << "输入十个整数,每次输入后按回车" << endl;
	for (int i = 0;i < 10;i++)
	{
		cin >> num;
		bool repeat = false;
		for (int n = 0;n < sus;n++)
		{
			if (arr[n] == num) 
			{
				repeat = true;
				break;
			}
		}
		if (!repeat) {
			arr[sus] = num;
			sus++;
		}
	}
	for (int k = 0;k < sus;k++) {
		cout << arr[k] << " ";
	}
	cout << endl;
	return 0;
}