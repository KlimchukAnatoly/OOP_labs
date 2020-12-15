#include "Myclass.h"

template<typename T>
inline Myclass<T>::Myclass()
{
	val = (T)0;
}

template<typename T>
Myclass<T>::Myclass(T _value)
{
	val = _value;
}

template<typename T>
void Myclass<T>::show()
{
	cout << "Value = " << val << endl;
}

template<typename T>
Myclass<T> Myclass<T>::operator+(Myclass _obj)
{
	return Myclass(this->val + _obj.Get());
}