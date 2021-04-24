#define _CRT_SECURE_NO_WARNINGS 1

#include <bits/stdc++.h>
using namespace std;
const int N = 16;
int res[N];
int n;
int main()
{
	cin >> n;
	res[1] = 1;
	res[2] = 2;
	for (int i = 3; i <= n; i++)
	{
		res[i] = res[i - 1] + res[i - 2];
	}
	cout << res[n] << endl;
	return 0;
}