#define _CRT_SECURE_NO_WARNINGS 1

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	string leftRotateString(string str, int n) {
		reverse(str.begin(), str.end());
		reverse(str.begin(), str.end() - n);
		reverse(str.end() - n, str.end());
		return str;
	}
};