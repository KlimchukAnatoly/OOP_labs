#include "data.h"

Numset grouping(Numset& obj1, Numset& obj2) {
	int counter = obj1.getLength();
	for (int i = 0; i < obj2.getLength(); i++)
	{
		if (!obj1.isInSet(obj2.getElement(i)))counter++;
	}
	Numset rezobj(counter, INT_MIN + 1000, INT_MAX - 1000);
	counter = obj1.getLength();
	for (int i = 0; i < counter; i++)
	{
		rezobj.setElement(i, obj1.getElement(i));
	}
	for (int i = 0; i < obj2.getLength(); i++)
	{
		if (!obj1.isInSet(obj2.getElement(i))) {
			rezobj.setElement(counter, obj2.getElement(i));
			counter++;
		}
	}
	return rezobj;
}

Numset intersection(Numset& obj1, Numset& obj2) {
	int counter = 0;
	for (int i = 0; i < obj2.getLength(); i++)
	{
		if (obj1.isInSet(obj2.getElement(i)))counter++;
	}
	Numset rezobj(counter, INT_MIN + 1000, INT_MAX - 1000);
	counter = 0;
	for (int i = 0; i < obj2.getLength(); i++)
	{
		if (obj1.isInSet(obj2.getElement(i))) {
			rezobj.setElement(counter, obj2.getElement(i));
			counter++;
		}
	}
	return rezobj;
}

Numset difference(Numset& obj1, Numset& obj2) {
	int counter = 0;
	for (int i = 0; i < obj1.getLength(); i++)
	{
		if (!obj2.isInSet(obj1.getElement(i)))counter++;
	}
	Numset rezobj(counter, INT_MIN + 1000, INT_MAX - 1000);
	counter = 0;
	for (int i = 0; i < obj1.getLength(); i++)
	{
		if (!obj2.isInSet(obj1.getElement(i))) {
			rezobj.setElement(counter, obj1.getElement(i));
			counter++;

		}
	}
	return rezobj;
}

Numset disjunc(Numset& obj1, Numset& obj2) {
	int counter = obj1.getLength()+obj2.getLength();
	for (int i = 0; i < obj2.getLength(); i++)
	{
		if (obj1.isInSet(obj2.getElement(i)))counter-=2;
	}
	Numset rezobj(counter, INT_MIN + 1000, INT_MAX - 1000);
	counter = 0;
	for (int i = counter; i < obj1.getLength(); i++)
	{
		if (!obj2.isInSet(obj1.getElement(i))) {
			rezobj.setElement(counter, obj1.getElement(i));
			counter++;
		}
	}
	for (int i = 0; i < obj2.getLength(); i++)
	{
		if (!obj1.isInSet(obj2.getElement(i))) {
			rezobj.setElement(counter, obj2.getElement(i));
			counter++;
		}
	}
	return rezobj;
}