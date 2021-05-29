#define _CRT_SECURE_NO_WARNINGS 1
//朴素做法
//#include <bits/stdc++.h>
//
//using namespace std;
//
//const int N = 1e4 + 10;
//int l, n;
//bool st[N];
//int main()
//{
//	cin >> l >> n;
//	memset(st, true, sizeof(st));
//	while (n--)
//	{
//		int a, b;
//		cin >> a >> b;
//		for (int i = a; i <= b; i++) st[i] = false;
//	}
//	int res = 0;
//	for (int i = 0; i <= l; i++) res += st[i];
//	cout << res << endl;
//	return 0;
//}
//区间合并算法
//将所有区间按左端点从小到大排序
//从左到右遍历每个区间
//