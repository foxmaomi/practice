#include<iostream>
#include"Handle1.h"

#include<string.h>
template <class T> class Handle;
class Node {
	friend class Handle<Node>;   //句柄模型类
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
	int get_weight() const { return wei; }  //获取权重
	char get_char() const { return ch; }
	Node &get_lcild() { return *lc; }  //获得左结点
	Node& get_rchild() { return *rc; }  //获取右结点
	void set(const Node & 1, const Node& r) {
		//设置左右结点
		lc = Handle<Node>(new Node(l));
		rc = Handle<Node>(new Node(r));
	}
	void set_bits(const string& s) { bits = s; }   //设置编码
private:
	char ch;   //字符
	int wei;   //权重
	string bits;   //编码
	Handle<Node>lc;  //左结点句柄
	Handle<Node>rc;   //右结点句柄
	inline bool compare(const Node &lhs, const Node &rhs);   //multiset
	inline bool compare(const Node& lhs, const Node& rhs)
	{
		return lhs.get_weight() < rhs.get_weight();
	}
	class BinartNodes {
		typedef bool (*Comp)(const Node&, const Node&);
	public:
		BinartNodes():ms(compare){}  // 初始化ms的比较函数
		void add_Node(Node& n) { ms.insert(n); }   // 增加Node结点
		Node pop();   //出结点
		size_t size() { return ms.size(); }   //获取multiset大小
		Node get_Node() { return *ms.begin(); }    //获取multiset第一个数据
	private:
		multiset<Node, Comp> ms;
	};
};