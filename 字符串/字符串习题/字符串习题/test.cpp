#define _CRT_SECURE_NO_WARNINGS 1

//AcWing 760 
/*
给定一行长度不超过 100 的字符串，请你求出它的具体长度。

输入格式
输入一行，表示一个字符串。注意字符串中可能包含空格。

输入样例：
I love Beijing.
输出样例：
15
*/
//解法1：
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
//解法2:
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
761. 字符串中的数字个数
输入一行字符，长度不超过 100，请你统计一下其中的数字字符的个数。

输入格式
输入一行字符。注意其中可能包含空格。

输出格式
输出一个整数，表示字数字字符的个数。

输入样例：
I am 18 years old this year.
输出样例：
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
762. 字符串匹配
给定两个长度相同的字符串 a 和字符串 b。

如果在某个位置 i 上，满足字符串 a 上的字符 a[i] 和字符串 b 上的字符 b[i] 相同，那么这个位置上的字符就是匹配的。

如果两个字符串的匹配位置的数量与字符串总长度的比值大于或等于 k，则称两个字符串是匹配的。

现在请你判断给定的两个字符串是否匹配。

输入格式
第一行包含一个浮点数 k，第二行包含字符串 a，第三行包含字符串 b。

输入的字符串中不包含空格。

输出格式
如果两个字符串匹配，则输出 yes。

否则，输出 no。

数据范围
0≤k≤1,
字符串的长度不超过 100。

输入样例：
0.4
abcde
xbacd
输出样例：
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
763. 循环相克令
循环相克令是一个两人玩的小游戏。

令词为“猎人、狗熊、枪”，两人同时说出令词，同时做出一个动作——猎人的动作是双手叉腰;狗熊的动作是双手搭在胸前;枪的动作是双手举起呈手枪状。

双方以此动作判定输赢，猎人赢枪、枪赢狗熊、狗熊赢猎人，动作相同则视为平局。

现在给定你一系列的动作组合，请你判断游戏结果。

输入格式
第一行包含整数 T，表示共有 T 组测试数据。

接下来 T 行，每行包含两个字符串，表示一局游戏中两人做出的动作，字符串为 Hunter, Bear, Gun 中的一个，这三个单词分别代表猎人，狗熊和枪。

输出格式
如果第一个玩家赢了，则输出 Player1。

如果第二个玩家赢了，则输出 Player2。

如果平局，则输出 Tie。

数据范围
1≤N≤100
输入样例
3
Hunter Gun
Bear Bear
Hunter Bear
输出样例
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
765. 字符串加空格
给定一个字符串，在字符串的每个字符之间都加一个空格。

输出修改后的新字符串。

输入格式
共一行，包含一个字符串。注意字符串中可能包含空格。

输出格式
输出增加空格后的字符串。

数据范围
1≤字符串长度≤100
输入样例：
test case
输出样例：
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
766. 去掉多余的空格
输入一个字符串，字符串中可能包含多个连续的空格，请将多余的空格去掉，只留下一个空格。

输入格式
共一行，包含一个字符串。

输出格式
输出去掉多余空格后的字符串，占一行。

数据范围
输入字符串的长度不超过 200。

输入样例：
Hello      world.This is    c language.
输出样例：
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
//		int j = i; // 此处用了双指针算法！！！！
//		while (j < a.size() && a[j] == ' ') j++;
//		i = j - 1;
//	}
//	cout << r << endl;
//	return 0;
//}
/*
767. 信息加密
在传输信息的过程中，为了保证信息的安全，我们需要对原信息进行加密处理，形成加密信息，从而使得信息内容不会被监听者窃取。

现在给定一个字符串，对其进行加密处理。

加密的规则如下：

字符串中的小写字母，a 加密为 b，b 加密为 c，…，y 加密为 z，z 加密为 a。
字符串中的大写字母，A 加密为 B，B 加密为 C，…，Y 加密为 Z，Z 加密为 A。
字符串中的其他字符，不作处理。
请你输出加密后的字符串。

输入格式
共一行，包含一个字符串。注意字符串中可能包含空格。

输出格式
输出加密后的字符串。

数据范围
输入字符串的长度不超过 100。

输入样例：
Hello! How are you!
输出样例：
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
772. 只出现一次的字符
给你一个只包含小写字母的字符串。

请你判断是否存在只在字符串中出现过一次的字符。

如果存在，则输出满足条件的字符中位置最靠前的那个。

如果没有，输出 no。

输入格式
共一行，包含一个由小写字母构成的字符串。

数据保证字符串的长度不超过 100000。

输出格式
输出满足条件的第一个字符。

如果没有，则输出 no。

输入样例：
abceabcd
输出样例：
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
764. 输出字符串
给定一个字符串 a，请你按照下面的要求输出字符串 b。

给定字符串 a 的第一个字符的 ASCII 值加第二个字符的 ASCII 值，得到 b 的第一个字符；

给定字符串 a 的第二个字符的 ASCII 值加第三个字符的 ASCII 值，得到 b 的第二个字符；

…

给定字符串 a 的倒数第二个字符的 ASCII 值加最后一个字符的 ASCII 值，得到 b 的倒数第二个字符；

给定字符串 a 的最后一个字符的 ASCII 值加第一个字符的 ASCII 值，得到 b 的最后一个字符。

输入格式
输入共一行，包含字符串 a。注意字符串中可能包含空格。

数据保证字符串内的字符的 ASCII 值均不超过 63。

输出格式
输出共一行，包含字符串 b。

数据范围
2≤a的长度≤100
输入样例：
1 2 3
输出样例：
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
770. 单词替换
输入一个字符串，以回车结束（字符串长度不超过 100）。

该字符串由若干个单词组成，单词之间用一个空格隔开，所有单词区分大小写。

现需要将其中的某个单词替换成另一个单词，并输出替换之后的字符串。

输入格式
输入共 3 行。

第 1 行是包含多个单词的字符串 s;

第 2 行是待替换的单词 a(长度不超过 100);

第 3 行是 a 将被替换的单词 b(长度不超过 100)。

输出格式
共一行，输出将 s 中所有单词 a 替换成 b 之后的字符串。

输入样例：
You want someone to help you
You
I
输出样例：
I want someone to help you
*/
//case 1;
//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	string s;//原串
//	getline(cin, s);
//	string a, b;//a是原串中的串，b是要替换的串
//	cin >> a >> b;
//	stringstream ssin(s);//把一个字符串初始化成字符串流类似于cin
//	string str;//从字符串中提取出需要的各种信息
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
771. 字符串中最长的连续出现的字符
求一个字符串中最长的连续出现的字符，输出该字符及其出现次数，字符串中无空白字符（空格、回车和 tab），如果这样的字符不止一个，则输出第一个。

输入格式
第一行输入整数 N，表示测试数据的组数。

每组数据占一行，包含一个不含空白字符的字符串，字符串长度不超过 200。

输出格式
共一行，输出最长的连续出现的字符及其出现次数，中间用空格隔开。

输入样例：
2
aaaaabbbbbcccccccdddddddddd
abcdefghigk
输出样例：
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
//			//第一类双指针算法
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
774. 最长单词
一个以 . 结尾的简单英文句子，单词之间用空格分隔，没有缩写形式和其它特殊形式，求句子中的最长单词。

输入格式
输入这个简单英文句子，长度不超过 500。

输出格式
该句子中最长的单词。如果多于一个，则输出第一个。

输入样例：
I am a student of Peking University.
输出样例：
University
*/
//#include <bits/stdc++.h>
//using namespace std;

//int main()
//{
//	//读入每个单词，判断是否为.如果是去掉.
//	string str, res;
//	while (cin >> str)
//	{
//		if (str.back() == '.')str.pop_back();//.back()是最后一个字符，pop_back()去掉这个字符；
//		if(str.size() > res.size()) res = str;
//	}
//	cout << res << endl;
//	return 0;
//}
/*
775. 倒排单词
编写程序，读入一行英文(只包含字母和空格，单词间以单个空格分隔)，将所有单词的顺序倒排并输出，依然以单个空格分隔。

输入格式
输入为一个字符串（字符串长度至多为 100）。

输出格式
输出为按要求排序后的字符串。

输入样例：
I am a student
输出样例：
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
