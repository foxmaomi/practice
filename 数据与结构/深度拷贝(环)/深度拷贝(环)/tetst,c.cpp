#define _CRT_SECURE_NO_WARNINGS


/*
// Definition for a Node.
class Node {
public:
int val;
Node* next;
Node* random;

Node() {}

Node(int _val, Node* _next, Node* _random) {
val = _val;
next = _next;
random = _random;
}
};
*/
class Solution {
public:
	Node* copyRandomList(Node* head) {
		if (!head) 
			return nullptr;
		Node* ite = head;
		while (ite) { // 用next连接
			Node* n = new Node(ite->val, ite->next, nullptr);
			Node* c = ite->next;
			ite->next = n;
			ite = c;
		}
		ite = head;
		while (ite) { // 连接random
			if (ite->random) 
				ite->next->random = ite->random->next;
			ite = ite->next->next;
		}
		ite = head;
		Node* ret = head->next;
		while (ite->next) { // 有丝分裂(大雾)
			Node* c = ite->next;
			ite->next = ite->next->next;
			ite = c;
		}
		return ret;
	}
};