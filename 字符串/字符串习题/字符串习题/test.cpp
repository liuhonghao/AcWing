#define _CRT_SECURE_NO_WARNINGS 1

//AcWing 760 
/*
����һ�г��Ȳ����� 100 ���ַ���������������ľ��峤�ȡ�

�����ʽ
����һ�У���ʾһ���ַ�����ע���ַ����п��ܰ����ո�

����������
I love Beijing.
���������
15
*/
//�ⷨ1��
//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	string a;
//	getline(cin, a);
//	printf("%d\n", a.size());
//	return 0;
//}
//�ⷨ2:
//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	char str[101];
//	for (int i = 0; str[i]; i++)
//		cin >> str[i];
//	int len = strlen(str);
//	cout << len+2 << endl;
//	return 0;
//}

/*
761. �ַ����е����ָ���
����һ���ַ������Ȳ����� 100������ͳ��һ�����е������ַ��ĸ�����

�����ʽ
����һ���ַ���ע�����п��ܰ����ո�

�����ʽ
���һ����������ʾ�������ַ��ĸ�����

����������
I am 18 years old this year.
���������
2
*/

//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	string a;
//	getline(cin, a);
//	int count = 0;
//	for (int i = 0; i < a.size(); i++)
//	{
//		if (a[i] >= '0'&&a[i] <= '9')
//			count++;
//	}
//	cout << count << endl;
//	return 0;
//}
/*
762. �ַ���ƥ��
��������������ͬ���ַ��� a ���ַ��� b��

�����ĳ��λ�� i �ϣ������ַ��� a �ϵ��ַ� a[i] ���ַ��� b �ϵ��ַ� b[i] ��ͬ����ô���λ���ϵ��ַ�����ƥ��ġ�

��������ַ�����ƥ��λ�õ��������ַ����ܳ��ȵı�ֵ���ڻ���� k����������ַ�����ƥ��ġ�

���������жϸ����������ַ����Ƿ�ƥ�䡣

�����ʽ
��һ�а���һ�������� k���ڶ��а����ַ��� a�������а����ַ��� b��

������ַ����в������ո�

�����ʽ
��������ַ���ƥ�䣬����� yes��

������� no��

���ݷ�Χ
0��k��1,
�ַ����ĳ��Ȳ����� 100��

����������
0.4
abcde
xbacd
���������
no
*/
//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	double k;
//	string a, b;
//	cin >> k >> a >> b;
//	int count = 0;
//	for (int i = 0; i < a.size(); i++)
//	{
//		if (a[i] == b[i])
//			count++;
//	}
//	if ((double)count / a.size() >= k)
//	{
//		puts("yes");
//	}
//	else
//	{
//		puts("no");
//	}
//	return 0;
//}
/*
763. ѭ�������
ѭ���������һ���������С��Ϸ��

���Ϊ�����ˡ����ܡ�ǹ��������ͬʱ˵����ʣ�ͬʱ����һ�������������˵Ķ�����˫�ֲ���;���ܵĶ�����˫�ִ�����ǰ;ǹ�Ķ�����˫�־������ǹ״��

˫���Դ˶����ж���Ӯ������Ӯǹ��ǹӮ���ܡ�����Ӯ���ˣ�������ͬ����Ϊƽ�֡�

���ڸ�����һϵ�еĶ�����ϣ������ж���Ϸ�����

�����ʽ
��һ�а������� T����ʾ���� T ��������ݡ�

������ T �У�ÿ�а��������ַ�������ʾһ����Ϸ�����������Ķ������ַ���Ϊ Hunter, Bear, Gun �е�һ�������������ʷֱ�������ˣ����ܺ�ǹ��

�����ʽ
�����һ�����Ӯ�ˣ������ Player1��

����ڶ������Ӯ�ˣ������ Player2��

���ƽ�֣������ Tie��

���ݷ�Χ
1��N��100
��������
3
Hunter Gun
Bear Bear
Hunter Bear
�������
Player1
Tie
Player2
*/
//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	while (n--)
//	{
//		string a, b;
//		cin >> a >> b;
//		int x, y;
//		if (a == "Hunter")x = 0;
//		else if (a == "Bear")x = 1;
//		else x = 2;
//		if (b == "Hunter")y = 0;
//		else if (b == "Bear")y = 1;
//		else y = 2;
//		if (x == y)
//			puts("Tie");
//		else if (x == (y + 1) % 3)
//			puts("Player1");
//		else
//			puts("Player2");
//
//	}
//	return 0;
//}
/*
765. �ַ����ӿո�
����һ���ַ��������ַ�����ÿ���ַ�֮�䶼��һ���ո�

����޸ĺ�����ַ�����

�����ʽ
��һ�У�����һ���ַ�����ע���ַ����п��ܰ����ո�

�����ʽ
������ӿո����ַ�����

���ݷ�Χ
1���ַ������ȡ�100
����������
test case
���������
t e s t   c a s e
*/
//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	string str;
//	getline(cin, str);
//	string b;
//	for (auto c : str)
//	{
//		b = b + c + ' ';
//	}
//	cout << b << endl;
//	return 0;
//}
/*
766. ȥ������Ŀո�
����һ���ַ������ַ����п��ܰ�����������Ŀո��뽫����Ŀո�ȥ����ֻ����һ���ո�

�����ʽ
��һ�У�����һ���ַ�����

�����ʽ
���ȥ������ո����ַ�����ռһ�С�

���ݷ�Χ
�����ַ����ĳ��Ȳ����� 200��

����������
Hello      world.This is    c language.
���������
Hello world.This is c language.

*/
//case 1:
//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	string str;
//	while (cin >> str)
//	{
//		cout << str << ' ';
//	}
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main(){
//	string a;
//	getline(cin, a);
//	string r;
//	for (int i = 0; i < a.size(); i++)
//	if (a[i] != ' ') r += a[i];
//	else {
//		r += ' ';
//		int j = i; // �˴�����˫ָ���㷨��������
//		while (j < a.size() && a[j] == ' ') j++;
//		i = j - 1;
//	}
//	cout << r << endl;
//	return 0;
//}
/*
767. ��Ϣ����
�ڴ�����Ϣ�Ĺ����У�Ϊ�˱�֤��Ϣ�İ�ȫ��������Ҫ��ԭ��Ϣ���м��ܴ����γɼ�����Ϣ���Ӷ�ʹ����Ϣ���ݲ��ᱻ��������ȡ��

���ڸ���һ���ַ�����������м��ܴ���

���ܵĹ������£�

�ַ����е�Сд��ĸ��a ����Ϊ b��b ����Ϊ c������y ����Ϊ z��z ����Ϊ a��
�ַ����еĴ�д��ĸ��A ����Ϊ B��B ����Ϊ C������Y ����Ϊ Z��Z ����Ϊ A��
�ַ����е������ַ�����������
����������ܺ���ַ�����

�����ʽ
��һ�У�����һ���ַ�����ע���ַ����п��ܰ����ո�

�����ʽ
������ܺ���ַ�����

���ݷ�Χ
�����ַ����ĳ��Ȳ����� 100��

����������
Hello! How are you!
���������
Ifmmp! Ipx bsf zpv!
*/
//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	string s;
//	getline(cin, s);
//	for (auto &c : s)
//	{
//		if (c >= 'a'&&c <= 'z')
//			c = (c - 'a' + 1) % 26 + 'a';
//		else if (c >= 'A'&&c <= 'Z')
//			c = (c - 'A' + 1) % 26 + 'A';
//	}
//	cout << s << endl;
//	return 0;
//}
/*
772. ֻ����һ�ε��ַ�
����һ��ֻ����Сд��ĸ���ַ�����

�����ж��Ƿ����ֻ���ַ����г��ֹ�һ�ε��ַ���

������ڣ�����������������ַ���λ���ǰ���Ǹ���

���û�У���� no��

�����ʽ
��һ�У�����һ����Сд��ĸ���ɵ��ַ�����

���ݱ�֤�ַ����ĳ��Ȳ����� 100000��

�����ʽ
������������ĵ�һ���ַ���

���û�У������ no��

����������
abceabcd
���������
e
*/
//#include <bits/stdc++.h>
//using namespace std;
//char cnt[26];
//char str[100010];
//int main()
//{
//	cin >> str;
//	int len = strlen(str);
//	for (int i = 0; i < len; i++)
//	{
//		cnt[str[i] - 'a']++;
//	}
//	for (int i = 0; i < len; i++)
//	{
//		if (cnt[str[i] - 'a'] == 1)
//		{
//			cout << str[i] << endl;
//			return 0;
//		}
//	}
//	puts("no");
//	return 0;
//}

/*
764. ����ַ���
����һ���ַ��� a�����㰴�������Ҫ������ַ��� b��

�����ַ��� a �ĵ�һ���ַ��� ASCII ֵ�ӵڶ����ַ��� ASCII ֵ���õ� b �ĵ�һ���ַ���

�����ַ��� a �ĵڶ����ַ��� ASCII ֵ�ӵ������ַ��� ASCII ֵ���õ� b �ĵڶ����ַ���

��

�����ַ��� a �ĵ����ڶ����ַ��� ASCII ֵ�����һ���ַ��� ASCII ֵ���õ� b �ĵ����ڶ����ַ���

�����ַ��� a �����һ���ַ��� ASCII ֵ�ӵ�һ���ַ��� ASCII ֵ���õ� b �����һ���ַ���

�����ʽ
���빲һ�У������ַ��� a��ע���ַ����п��ܰ����ո�

���ݱ�֤�ַ����ڵ��ַ��� ASCII ֵ�������� 63��

�����ʽ
�����һ�У������ַ��� b��

���ݷ�Χ
2��a�ĳ��ȡ�100
����������
1 2 3
���������
QRRSd
*/
//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	string a, b;
//	getline(cin, a);
//	for (int i = 0; i < a.size(); i++)b += a[i] + a[(i + 1 )% a.size()];
//	cout << b << endl;
//	return 0;
//}
/*
770. �����滻
����һ���ַ������Իس��������ַ������Ȳ����� 100����

���ַ��������ɸ�������ɣ�����֮����һ���ո���������е������ִ�Сд��

����Ҫ�����е�ĳ�������滻����һ�����ʣ�������滻֮����ַ�����

�����ʽ
���빲 3 �С�

�� 1 ���ǰ���������ʵ��ַ��� s;

�� 2 ���Ǵ��滻�ĵ��� a(���Ȳ����� 100);

�� 3 ���� a �����滻�ĵ��� b(���Ȳ����� 100)��

�����ʽ
��һ�У������ s �����е��� a �滻�� b ֮����ַ�����

����������
You want someone to help you
You
I
���������
I want someone to help you
*/
//case 1;
//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	string s;//ԭ��
//	getline(cin, s);
//	string a, b;//a��ԭ���еĴ���b��Ҫ�滻�Ĵ�
//	cin >> a >> b;
//	stringstream ssin(s);//��һ���ַ�����ʼ�����ַ�����������cin
//	string str;//���ַ�������ȡ����Ҫ�ĸ�����Ϣ
//	//int x, y;
//	//double c;
//	//ssin >>  x >> str >> y >> c;
//	//cout << x << endl << str << endl << y << endl << c << endl;
//	while (ssin >> str)
//	{
//		if (str == a)cout << b << ' ';
//		else cout << str << ' ';
//	}
//	return 0;
//}
/*
771. �ַ���������������ֵ��ַ�
��һ���ַ���������������ֵ��ַ���������ַ�������ִ������ַ������޿հ��ַ����ո񡢻س��� tab��������������ַ���ֹһ�����������һ����

�����ʽ
��һ���������� N����ʾ�������ݵ�������

ÿ������ռһ�У�����һ�������հ��ַ����ַ������ַ������Ȳ����� 200��

�����ʽ
��һ�У��������������ֵ��ַ�������ִ������м��ÿո������

����������
2
aaaaabbbbbcccccccdddddddddd
abcdefghigk
���������
d 10
a 1
*/
//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	while (n--)
//	{
//		string a;
//		cin >> a;
//		int count = 0;
//		char c;
//		for (int i = 0; i < a.size(); i++)
//		{
//			//��һ��˫ָ���㷨
//			int j = i;
//			while (j < a.size() && a[j]==a[i])j++;
//			if (j - i>count)count = j - i, c = a[i];
//			i = j - 1;
//		}
//		cout << c << ' ' << count << endl;
//	}
//	return 0;
//}
/*
774. �����
һ���� . ��β�ļ�Ӣ�ľ��ӣ�����֮���ÿո�ָ���û����д��ʽ������������ʽ��������е�����ʡ�

�����ʽ
���������Ӣ�ľ��ӣ����Ȳ����� 500��

�����ʽ
�þ�������ĵ��ʡ��������һ�����������һ����

����������
I am a student of Peking University.
���������
University
*/
//#include <bits/stdc++.h>
//using namespace std;

//int main()
//{
//	//����ÿ�����ʣ��ж��Ƿ�Ϊ.�����ȥ��.
//	string str, res;
//	while (cin >> str)
//	{
//		if (str.back() == '.')str.pop_back();//.back()�����һ���ַ���pop_back()ȥ������ַ���
//		if(str.size() > res.size()) res = str;
//	}
//	cout << res << endl;
//	return 0;
//}
/*
775. ���ŵ���
��д���򣬶���һ��Ӣ��(ֻ������ĸ�Ϳո񣬵��ʼ��Ե����ո�ָ�)�������е��ʵ�˳���Ų��������Ȼ�Ե����ո�ָ���

�����ʽ
����Ϊһ���ַ������ַ�����������Ϊ 100����

�����ʽ
���Ϊ��Ҫ���������ַ�����

����������
I am a student
���������
student a am I
*/
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string str[100];
//	int n = 0;
//	while (cin >> str[n])n++;
//	for (int i = n - 1; i >= 0; i--)cout << str[i] << ' ';
//	cout << endl;
//	/*string a, b;
//	while (cin >> a)
//		b = a + ' ' + b;
//	cout << b << endl;*/
//	return 0;
//}
