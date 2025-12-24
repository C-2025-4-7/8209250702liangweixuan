#include<iostream>
#include<cstring>
using namespace std;
int indexOf(const char s1[],const char s2[]) {
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	if (len1 == 0) {
		return 0;
	}
	if (len1 > len2) {
		return -1;
	}
	for (int i = 0;i <= len2 - len1;i++) {
		bool match = true;
		for (int j = 0;j < len1;j++) {
			if (s2[i + j] != s1[j]) {
				match = false;
				break;
			}
		}
		if (match) {
			return i;
		}
	}
	return -1;
}
int main() {
const int max_len = 100;
	char s1[max_len], s2[max_len];
	cout << "请输入子串1";
	cin >> s1;
	cout << "请输入子串2";
	cin >> s2;
	int a = indexOf(s1, s2);
	if (a != -1) {
		cout << "子串1是子串2的子串，起始下标为" << a << endl;
	}
	else {
		cout << "子串1不是子串2的子串" << endl;
	}
	return 0;
}