#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
void count(const char s[], int counts[]) {
	for (int i = 0;i < 26;i++) {
		counts[i] = 0;
	}
	int len = strlen(s);
	for (int i = 0;i < len;i++) {
		char ch = tolower(s[i]);
		if (isalpha(ch)) {
			int abc= ch - 'a';
			counts[abc]++;
		}
	}
}
int main() {
	const int max = 1000;
	char s[max];
	int	counts[26];
	cout << "请输入" << endl;
	cin.getline(s, max);
	count(s, counts);
	cout << "字母出现次数（除去为0的情况）" << endl;
	for (int i = 0;i < 26;i++) {
		if (counts[i] != 0) {
			char b= 'a' + i;
			cout << b <<":"<<counts[i]<< endl;
		}
	}
	return 0;
}