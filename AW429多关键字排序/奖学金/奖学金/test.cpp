#define _CRT_SECURE_NO_WARNINGS 1
/*

��ĩ��ÿ��ѧ������ 3 �ſεĳɼ�:���ġ���ѧ��Ӣ�
�Ȱ��ִܷӸߵ��������������ͬѧ�ܷ���ͬ���ٰ����ĳɼ��Ӹߵ��������������ͬѧ�ֺܷ����ĳɼ�����ͬ��
��ô�涨ѧ��С��ͬѧ����ǰ�棬������ÿ��ѧ����������Ψһȷ���ġ�
*/
//���أ���

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
		int a, b, c;//a������ b����ѧ c��Ӣ��
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


//�Զ���ȽϺ���

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