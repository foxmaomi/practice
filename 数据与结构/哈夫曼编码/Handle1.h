#include<iostream>
template <class type> class Handle {
public:
	Handle(Type *ptr = 0):pn(ptr),use(new size_t(1)){}
	Type& operator*();   //重载操作符*
	Type* operator->();   //重载操作符->
	const Type& operator*() const;
	const Type* operator->() const;
	Handle(const Handle& h) :pn(h.pn), use(h.use) { ++* use; }  //复制操作
	Handle& operator = (const Handle& h);  //重载操作符=，赋值操作
	~Handle() { rem_ref(); }    //析构函数
private:
	Type* pn;   //对象指针
	size_t* use;  //使用次数
	void rem_ref()
	{
		if(--*use == 0)
		{
			delete pn;
			delete use;
		}
	}
};
template<class Type> inline Type& Handle<Type>::operator*()
{
	if (pn)
		return *pn;
	throw runtime_error("dereference of unbound Handle");
}
template <class Type> inline const Type& Handle<Type>::operator*() const
{
	if (pn)
		return *pn;
	throw runtime_error("dereference of unbound Handle");
}
template <class Type> inline Type* Handle<Type>::operator->()
{
	if (pn)
		return pn;
	throw runtime_error("access through unbound handle");
}
template <class Type>inline const Type* Handle<Type>::operator->() const
{
	if (pn)
		return pn;
	throw runtime_error("access through unbound handle");
}
template <class Type> inline Handle<Type>& Handle<Type>::operator=
(const Handle& rhs)
{
	++* rhs.use;
	rem_ref();
	pn = rhs.pn;
	use = rhs.use;
	return *this;
}