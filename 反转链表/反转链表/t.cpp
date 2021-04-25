#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
using namespace std;

/*
定义一个函数，输入一个链表的头结点，反转该链表并输出反转后链表的头结点。

思考题：

请同时实现迭代版本和递归版本。
样例
输入:1->2->3->4->5->NULL

输出:5->4->3->2->1->NULL
*/
/*
迭代版本
*/


struct ListNode 
{
   int val;
   ListNode *next;
   ListNode(int x) : val(x), next(NULL) {}
};
//class Solution {
//public:
//	ListNode* reverseList(ListNode* head) {
//		if (!head ||!head->next)return head;
//		auto a = head, b = a->next;
//		while (b)
//		{
//			auto c = b->next;
//			b->next = a;
//			a = b, b = c;
//		}
//		head->next = NULL;
//		return a;
//	}
//};
/*
递归版本
*/
class Solution {
public:
	ListNode* reverseList(ListNode* head) {
		if (!head || !head->next)return head;
		auto tail=reverseList(head->next);
		head->next->next = head;
		head->next = NULL;
		return tail;
	}
};