#include "XorClass.h"
#include <iostream>
#include <bitset>
using namespace std;

string XorClass::Crypt(string text, string decalage)
{
	string result;
	int current = 0;
	for (char item : text)
	{
		result += (int)(bitset<8>(item) ^ bitset<8>(decalage[current % decalage.length()])).to_ulong();
	}
	return result;
}
