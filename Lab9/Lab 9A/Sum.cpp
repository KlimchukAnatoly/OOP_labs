#include "Sum.h"

bool Sum::operator==(Sum _obj)
{
	if (this->sum == _obj.sum) return true;
	else return false;
}

bool Sum::operator<(Sum _obj)
{
	if (this->sum < _obj.sum) return true;
	else return false;
}

bool Sum::operator >(Sum _obj)
{
	if (this->sum > _obj.sum) return true;
	else return false;
}
