#include <iostream>
#include <fstream>

#include "CesarClass.h"
#include "XorClass.h"

using namespace std;

string Cesar(string text) {
	CesarClass cesar;
	int decalage;
	cout << "Quelle decalage :" << endl;
	cin >> decalage;
	return cesar.Crypt(text, decalage);
}

string Xor(string text) {
	XorClass _xor;
	string key;
	cout << "Quelle clee :" << endl;
	cin >> key;
	return _xor.Crypt(text, key);
}

string BothSecurityMode(string text) {
	return Xor(Cesar(text));
}

int main()
{
	string file;
	cout << "Quelle est le nom de fichier :" << endl;
	cin >> file; //text.txt

	string myLine, myText;
	ifstream textFile(file);

	while (getline(textFile, myLine)) {
		myText += myLine;
		cout << myText << endl;
	}
	textFile.close();

	int mode;
	cout << "Quelle est le mode de cryptage :  (1. Cesar, 2.Xor, 3.Both)" << endl;
	cin >> mode;

	string crypted = "";
	switch (mode)
	{
	case 1:
		crypted = Cesar(myText);
		break;
	case 2:
		crypted = Xor(myText);
		break;
	case 3:
		crypted = BothSecurityMode(myText);
		break;
	default:
		break;
	}

	cout << crypted << endl;

	string finalFile;
	cout << "Quelle nom de fichier pour stocker le cryptage" << endl;
	cin >> finalFile;
	ofstream writedFile(finalFile);
	writedFile << crypted;
	writedFile.close();

	return 0;
}
