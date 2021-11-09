#include "CesarClass.h"
using namespace std;

string CesarClass::Crypt(const string& text, const int& decalage)
{
	string result = "";
	for (char item : text)
	{
		item += decalage;
		result += item;
	}
	return result;
}
