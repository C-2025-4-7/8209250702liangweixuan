#include<iostream>;
using namespace std;
int main() {
	int	student_count = 0;
	bool arr[100];
	for (int i = 0;i < 100;i++) {
		arr[i] = false ;
	}
	++student_count;
	for (int j = 0;j < 100;j++) {
		arr[j] = true;
	}
	while (student_count < 100)
	{
		
		for (int k = 0;k < 100;k += student_count + 1)
		{
			if (arr[k] == false)
			{
				arr[k] = true;
			}
			else
			{
				arr[k] = false;
			}
        }
		student_count++;
	}
	for (int m = 0;m < 100;m++)
	{
		if (arr[m] == true)
		{
			cout << m+1 << endl;
		}
	}
	return 0;
}