#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string num;
	cin >> num;
	int sum = 0;
	for (auto c : num)sum += c - '0';
	string str = to_string(sum);
	string name[] = { "zero", "one", "two", "three",
		"four", "five", "six", "seven", "eight", "nine"};
	for (auto c : str)
		cout << name[c - '0'] << ' ';
	return 0;
}