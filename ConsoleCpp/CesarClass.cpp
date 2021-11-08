#include "CesarClass.h"
#include <iostream>

using namespace std;

string CesarClass::Crypt(string text, int decalage)
{
	string result = "";
	for (char item : text)
	{
		item += decalage;
		result += item;
	}
	return result;
}
