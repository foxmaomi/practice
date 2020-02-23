#include<iostream>
#include"Handle1.h"

#include<string.h>
template <class T> class Handle;
class Node {
	friend class Handle<Node>;   //���ģ����
public:
	Node():ch(' '),wei(0),bits(),lc(),rc(){}
	Node(const char c,const int w):
		ch(c),wei(w),bits(),lc(),rc(){}
	Node(const Node& n) {
		ch = n.ch; 
		wei = n.wei;
		bits = n.bits;
		lc = n.lc;
		rc = n.rc;
	}
	virtual Node* clone()const { return new Node(*this); }
	int get_weight() const { return wei; }  //��ȡȨ��
	char get_char() const { return ch; }
	Node &get_lcild() { return *lc; }  //�������
	Node& get_rchild() { return *rc; }  //��ȡ�ҽ��
	void set(const Node & 1, const Node& r) {
		//�������ҽ��
		lc = Handle<Node>(new Node(l));
		rc = Handle<Node>(new Node(r));
	}
	void set_bits(const string& s) { bits = s; }   //���ñ���
private:
	char ch;   //�ַ�
	int wei;   //Ȩ��
	string bits;   //����
	Handle<Node>lc;  //������
	Handle<Node>rc;   //�ҽ����
	inline bool compare(const Node &lhs, const Node &rhs);   //multiset
	inline bool compare(const Node& lhs, const Node& rhs)
	{
		return lhs.get_weight() < rhs.get_weight();
	}
	class BinartNodes {
		typedef bool (*Comp)(const Node&, const Node&);
	public:
		BinartNodes():ms(compare){}  // ��ʼ��ms�ıȽϺ���
		void add_Node(Node& n) { ms.insert(n); }   // ����Node���
		Node pop();   //�����
		size_t size() { return ms.size(); }   //��ȡmultiset��С
		Node get_Node() { return *ms.begin(); }    //��ȡmultiset��һ������
	private:
		multiset<Node, Comp> ms;
	};
};