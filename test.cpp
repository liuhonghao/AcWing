#define _CRT_SECURE_NO_WARNINGS 1

/*
804. n的阶乘
*/
//#include<bits/stdc++.h>
//using namespace std;
//
//int fact1(int n)
//{
//	if (n == 0 || n == 1)
//		return 1;
//	else
//		return n*fact(n - 1);
//}
//int fact2(int n)
//{
//	int s = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		s *= i;
//	}
//	return s;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	cout << fact1(n) << endl;
//	return 0;
//}

/*
805. x和y的最大值
*/
//#include <iostream>
//using namespace std;
//
//int max(int x, int y)
//{
//	/*return x > y ? x : y;*/
//	if (x >= y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int x, y;
//	cin >> x >> y;
//	cout << max(x, y) << endl;
//	return 0;
//}

//最大公约数
//#include <iostream>
//using namespace std;
//
//int gcd(int a, int b)
//{
//	int temp;
//	if (a < b)swap(a, b);
//	while (b != 0)
//	{
//		temp = a%b;
//		a = b;
//		b = temp;
//	}
//	return a;
//}
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	cout << gcd(a, b) << endl;
//	return 0;
//}

//for i = 1:10
//	for j=i+1:11
//		for n=j+1:12
//		for m = n + 1 : 13
//			A = zeros(1, 13);
//		A(i) = 1;
//		A(j) = 1;
//		A(n) = 1;
//		A(m) = 1;
//		if (A(1) + A(4) + A(6) >= 1)&(A(1) + A(2) + A(3) >= 1)&(A(6) + A(8) + A(12) >= 1)&(A(3) + A(4) + A(5) + A(7) >= 1)&(A(7) + A(8) + A(9) + A(10) >= 1)&(A(10) +A(12) + A(13) >= 1)&(A(2) + A(5) + A(9) + A(11) >= 1)&(A(11) + A(13) >= 1)
//			i, j, n, m;
//				end
//			end
//		end
//	end
//end
