#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <cstdio>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	unordered_map<int, int>hash;
	for (int i = 0; i < n*m; i++)
	{
		int x;
		cin >> x;
		if (++hash[x] * 2>n*m)
		{
			cout << x << endl;
			break;
		}
	}
	return 0;
}