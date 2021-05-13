#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

const int N = 10;
int dx[4] = { -1, 0, 1, 0 }, dy[4] = { 0, 1, 0, -1 };

int n, m, k;
int w[N][N];
set<int>s;
void dfs(int x, int y, int u, int num)
{
	if (u>k)
	{
		s.insert(num);
	}
	else
	{
		for (int i = 0; i < 4; i++)
		{
			int tx = x + dx[i];
			int ty = y + dy[i];
			if (tx >= 0 && tx < n&&ty >= 0 && ty < m)
			{
				dfs(tx, ty, u + 1, w[tx][ty] + num * 10);
			}
		}
	}
}
int main()
{
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> w[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			dfs(i, j, 1, w[i][j]);
		}
	}
	cout << s.size() << endl;
	return 0;
}
