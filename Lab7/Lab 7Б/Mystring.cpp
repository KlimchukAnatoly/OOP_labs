#include "Mystring.h"

ofstream& operator<<(ofstream& s, Mystring obj)
{
	for (int i = 0; i < obj.text.length(); i++)
	{
		try
		{
			if (obj.text[i]<58 && obj.text[i]>47) throw 1;
			if (obj.text[i]<-32 && obj.text[i]>-65) throw 2;
			s << obj.text[i];
		}
		catch (const int _ex)
		{
			continue;
		}
	}
	return s;
}

void Mystring::show()
{
	cout << text << endl;
}