#include<iostream>
#include<vector>
#include<stack>

using namespace std;

template<class Type>
class AVLTree;

template<class Type>
class AVLNode
{
	friend class AVLTree<Type>;
public:
	AVLNode(Type d = Type(), AVLNode<Type>* left = nullptr, AVLNode<Type>* right = nullptr)
		:data(d), leftChild(left), rightChild(right), bf(0)
	{}
	~AVLNode()
	{}
public:
	//增加的自定义函数
private:
	Type data;
	AVLNode<Type>* leftChild;
	AVLNode<Type>* rightChild;
	int bf;    //平衡因子 0 -1 1 -2 2
};
template<class Type>
class AVLTree
{
public:
	AVLTree():root(nullptr)
	{}
public:
	bool Insert(const Type& x)
	{
		return Insert(root, x);
	}
protected:
	bool Insert(AVLNode<Type>*& t, const Type &x);
protected:
	void RotateL(AVLNode<Type>*& ptr)
	{
		AVLNode<Type>* subL = ptr;
		ptr = ptr->rightChild;    //走到中间节点
		subL->rightChild = ptr->leftChild; //  断开不平衡节点的右树
		ptr->leftChild = subL;    //把不平衡节点链接到中间节点的左树
		//????为什么不直接赋一个空指针
		ptr->bf = subL->bf = 0;    //调整平衡因子

	}
	void RotateR(AVLNode<Type>* ptr)
	{
		AVLNode<Type>* subR = ptr;
		ptr = ptr->leftChild;
		subR->leftChild = ptr->rightChild;
		ptr->rightChild = subR;
		ptr->bf = subR->bf = 0;
	}
	void RotateLR(AVLNode<Type>*& ptr)
	{
		AVLNode<Type>* subL = ptr->leftChild;
		AVLNode<Type>* subR = ptr;
		ptr = subL->rightChild;

		//先左转
		subL->rightChild = ptr->leftChild;
		ptr->leftChild = subL;
		//subL bf
		if (ptr->bf == 1)
			subL->bf = -1;
		else
			subL->bf = 0;

		//后右转
		subR->leftChild = ptr->rightChild;
		ptr->rightChild = subR;
		//subR bf
		if (ptr->bf == -1)
			subR->bf = 1;
		else
			subR->bf = 0;

		ptr->bf = 0;
		
		
	}

private:
	AVLNode<Type>* root;
};
template<class Type>
bool AVLTree<Type>::Insert(AVLNode<Type>*& t, const Type& x)
{
	//1.节点的插入，按照bst规则
	AVLNode<Type>* pr = nullptr;//pr代表当前节点的父节点
	AVLNode<Type>* p = t;
	stack<AVLNode<Type>*> st;
	while (p != nullptr)
	{
		if (x == p->data)
			return false;   // 不插入重复数据
		pr = p;
		st.push(pr);
		if (x < p->data)
			p = p->leftChild;
		else
			p = p->rightChild;
	}
	p = new AVLNode<Type>(x);
	//判断是否插入的为根节点
	if (pr == nullptr)
	{
		t = p;
		return true;
	}
	//链接节点
	if (pr->data > x)
		pr->leftChild = p;
	else
		pr->rightChild = p;
	//2、平衡调整
	while (!st.empty())
	{
		pr = st.top();
		st.pop();
		if (p == pr->leftChild)
			pr->bf--;
		else
			pr->bf++;
		if (pr->bf == 0)
			break;
		if (pr->bf == 1 || r->bf == -1)
			p = pr;     //????????n   向上回溯，对上一个结点进行平衡因子的检测
	
	else
	{
		//旋转调整
		if (pr->bf > 0)
		{
			if (p->bf > 0)//  \左单旋转
			{
				RotateL(pr);
			}
			else
			{
				RotateRL(pr);    //   >  先右后左
			}
		}
		else
		{
			if (p->bf < 0)    //    / 右单旋转
			{
				RotateR(pr);
			}
			else
			{
				RotateLR(pr);//    <        先左后右
			}
		}
		break;
	}
}
	if (st.empty())
		t = pr;
	else
	{
		AVLNode<Type>* ppr = st.top();
		if (ppr->data > pr->data)
			ppr->leftChild = pr;
		else
			ppr->rightChild = pr;
	}
	return true;
}