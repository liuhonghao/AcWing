#define _CRT_SECURE_NO_WARNINGS 1
/*
给定一个长度为 n 的整数序列，请找出最长的不包含重复的数的连续区间，输出它的长度。

输入格式
第一行包含整数 n。

第二行包含 n 个整数（均在 0∼105 范围内），表示整数序列。

输出格式
共一行，包含一个整数，表示最长的不包含重复的数的连续区间的长度。

数据范围
1≤n≤105
输入样例：
5
1 2 2 3 5
输出样例：
3
*/
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
int a[N], s[N];
int n;
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)cin >> a[i];
	int res = 0;
	for (int i = 0, j = 0; i < n; i++)
	{
		s[a[i]]++;
		while (s[a[i]]>1)
		{
			s[a[j]]--;
			j++;
		}
		res = max(res, i - j + 1);
	}
	cout << res << endl;
	return 0;
}
//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int a = 2; a <= n; a++)
//	{
//		for (int b = 2; b < a; b++)
//		{
//			for (int c = b; c < a; c++)
//			{
//				for (int d = c; d < a; d++)
//				{
//					if (a*a*a == b*b*b + c*c*c + d*d*d)
//					{
//						printf("Cube = %d, Triple = (%d,%d,%d)\n", a, b, c, d);
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}