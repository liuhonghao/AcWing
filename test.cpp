#define _CRT_SECURE_NO_WARNINGS 1

//浮点数二分
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int w[N];
int n, m;
bool check(double mid)
{
	int cnt = 0;
	for (int i = 0; i < n; i++)
		cnt += w[i] / mid;
	return cnt >= m;
}
int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)cin >> w[i];
	double l = 0, r = 1e9;
	/*while (r - l >= 1e-4)
	{
		double mid = (l + r) / 2;
		if (check(mid))l = mid;
		else r = mid;
	}*/
	for (int i = 0; i < 100; i++)
	{
		double mid = (l + r) / 2;
		if (check(mid))l = mid;
		else r = mid;
	}
	printf("%.2lf\n", r);
	return 0;
}