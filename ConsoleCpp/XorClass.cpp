#include "XorClass.h"
#include <iostream>
#include <bitset>
using namespace std;

string XorClass::Crypt(string text, string key)
{
	string result;
	int current = 0;
	for (char item : text)
	{
		result += (int)(bitset<8>(item) ^ bitset<8>(key[current % key.length()])).to_ulong();
		current++;
	}
	return result;
}
