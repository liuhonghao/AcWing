#define _CRT_SECURE_NO_WARNINGS 1

//#include <bits/stdc++.h>
//using namespace std;
//
//int fib(int n)
//{
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		int res = fib(n);
//		cout << res << endl;
//	}
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//const int N = 10;
//int n;
//bool st[N];
//int path[N];
//void dfs(int u)
//{
//	if (u == n)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			printf("%d ",path[i]);
//		}
//		puts("");
//		return;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (!st[i])
//		{
//			path[u] = i;
//			st[i] = true;
//			dfs(u + 1);
//			st[i] = false;
//		}
//	}
//}
//int main()
//{
//	int n;
//	cin >> n;
//	dfs(0);
//	return 0;
//}

