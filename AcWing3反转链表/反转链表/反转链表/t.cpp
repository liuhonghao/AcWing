#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
using namespace std;

/*
����һ������������һ�������ͷ��㣬��ת�����������ת�������ͷ��㡣

˼���⣺

��ͬʱʵ�ֵ����汾�͵ݹ�汾��
����
����:1->2->3->4->5->NULL

���:5->4->3->2->1->NULL
*/
/*
�����汾
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
�ݹ�汾
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