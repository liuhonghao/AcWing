#define _CRT_SECURE_NO_WARNINGS 1
/*

期末，每个学生都有 3 门课的成绩:语文、数学、英语。
先按总分从高到低排序，如果两个同学总分相同，再按语文成绩从高到低排序，如果两个同学总分和语文成绩都相同，
那么规定学号小的同学排在前面，这样，每个学生的排序是唯一确定的。
*/
//重载＜号

#include <bits/stdc++.h>
using namespace std;

const int N = 310;
int n;
struct Person
{
	int id, sum, chinese, math, english;
	bool operator< (const Person &W)const
	{
		if (sum != W.sum) return sum>W.sum;
		if (chinese != W.chinese)return chinese> W.chinese;
		return id < W.id;
	}
}q[N];
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int a, b, c;//a是语文 b是数学 c是英语
		cin >> a >> b >> c;
		q[i] = { i, a + b + c, a, b, c };
	}
	sort(q + 1, q + n + 1);
	for (int i = 1; i <= 5; i++)
	{
		cout << q[i].id << ' ' << q[i].sum << endl;
	}
	return 0;
}


//自定义比较函数

//#include<bits/stdc++.h>
//using namespace std;
//
//const int N = 310;
//
//struct Person
//{
//	int id, sum, chinese, math, english;
//}q[N];
//int n;
//bool cmp(Person&a, Person&b)
//{
//	if (a.sum != b.sum) return a.sum > b.sum;
//	if (a.chinese != b.chinese)return a.chinese > b.chinese;
//	return a.id < b.id;
//
//}
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		q[i] = { i, a + b + c, a, b, c };
//	}
//	sort(q + 1, q + n + 1);
//	for (int i = 1; i <= 5; i++)
//	{
//		cout << q[i].id << ' ' << q[i].sum << endl;
//	}
//
//	return 0;
//}