#define _CRT_SECURE_NO_WARNINGS 1

#include <bits/stdc++.h>
using namespace std;

const int N = 510;
int n;
int a[N][N];
int main()
{
	scanf("%d", &n);
	for (int i=1; i <=n;i++)
		for (int j = 1; j <= n; j++)
			scanf("%d", &a[i][j]);
		for (int i = 2; i <= 2 * n; i++)
		{
			if (i % 2)
			{
				for (int j = 1; j < i; j++)
				{
					if (j >= 1 && j <= n&&i - j >= 1 && i - j <= n)
					{
						printf("%d ", a[j][i - j]);
					}
				}
			}
			else
			{
				for (int j = i - 1; j; j--)
				{
					if (j >= 1 && j <= n&&i - j >= 1 && i - j <= n)
					{
						printf("%d ", a[j][i - j]);
					}
				}
			}
		}
	return 0;
}