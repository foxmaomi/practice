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
	//���ӵ��Զ��庯��
private:
	Type data;
	AVLNode<Type>* leftChild;
	AVLNode<Type>* rightChild;
	int bf;    //ƽ������ 0 -1 1 -2 2
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

private:
	AVLNode<Type>* root;
};
template<class Type>
bool AVLTree<Type>::Insert(AVLNode<Type>*& t, const Type& x)
{
	//1.�ڵ�Ĳ��룬����bst����
	AVLNode<Type>* pr = nullptr;//pr����ǰ�ڵ�ĸ��ڵ�
	AVLNode<Type>* p = t;
	stack<AVLNode<Type>*> st;
	while (p != nullptr)
	{
		if (x == p->data)
			return false;   // �������ظ�����
		pr = p;
		st.push(pr);
		if (x < p->data)
			p = p->leftChild;
		else
			p = p->rightChild;
	}
	p = new AVLNode<Type>(x);
	//�ж��Ƿ�����Ϊ���ڵ�
	if (pr == nullptr)
	{
		t = p;
		return true;
	}
	//���ӽڵ�
	if (pr->data > x)
		pr->leftChild = p;
	else
		pr->rightChild = p;
	//2��ƽ�����
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
			p = pr;     //????????n   ���ϻ��ݣ�����һ��������ƽ�����ӵļ��
	}
	else
	{
		//��ת����
		if(pr->bf>0)
		{
			if (p->bf > 0)//  \����ת
			{
				RotateL(pr);
			}
			else
			{
				RotateRL(pr);    //   >  ���Һ���
			}
		}
		else
		{
			if (p->bf < 0)    //    / �ҵ���ת
			{
				RotateR(pr);
			}
			else
			{
				RotateLR(pr);//    <      
			}
		}
	}
}