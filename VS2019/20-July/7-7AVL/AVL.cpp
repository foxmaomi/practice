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
protected:
	void RotateL(AVLNode<Type>*& ptr)
	{
		AVLNode<Type>* subL = ptr;
		ptr = ptr->rightChild;    //�ߵ��м�ڵ�
		subL->rightChild = ptr->leftChild; //  �Ͽ���ƽ��ڵ������
		ptr->leftChild = subL;    //�Ѳ�ƽ��ڵ����ӵ��м�ڵ������
		//????Ϊʲô��ֱ�Ӹ�һ����ָ��
		ptr->bf = subL->bf = 0;    //����ƽ������

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

		//����ת
		subL->rightChild = ptr->leftChild;
		ptr->leftChild = subL;
		//subL bf
		if (ptr->bf == 1)
			subL->bf = -1;
		else
			subL->bf = 0;

		//����ת
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
	
	else
	{
		//��ת����
		if (pr->bf > 0)
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
				RotateLR(pr);//    <        �������
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