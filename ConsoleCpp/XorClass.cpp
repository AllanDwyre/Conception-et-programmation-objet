#include "XorClass.h"
#include <bitset>
std::string XorClass::Crypt(const std::string& text, const std::string& key)
{
	std::string result;
	int current = 0;
	for (char item : text)
	{
		result += (int)(
			std::bitset<8>(item) ^
			std::bitset<8>(key[current % key.length()])
			).to_ulong();
		current++;
	}
	return result;
}
