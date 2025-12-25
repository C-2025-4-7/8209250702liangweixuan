#include <iostream>
#include<cstring>
#include<string>
using namespace std;
int indexof(const char* s1, const char* s2) {
	string str1 = s1;
	string str2 = s2;
	if (str1.empty()) {
		return 0;
}
	int len1 = str1.length();
	int len2 = str2.length();
	if (len1 > len2) {
		return -1;
	}
	for (int i = 0;i <= len2 - len1;i++) {
		bool match = true;
		for (int j = 0;j < len1;j++) {
			if (str2[i + j] != str1[j]) {
				match = false;
				break;
			}
		}
		if (match) {
			return i;
		}
	}
	return -1;
};
int main() {
	const int max = 1000;
	char s1[max];
	char s2[max];
	cout << "输入s1";
	cin >> s1;
	cout << "输入s2";
	cin >> s2;
int result=	indexof(s1, s2);
if (result != -1) {
	cout << result << endl;
}
else {
	cout << " 无" << endl;
}
return 0;
}