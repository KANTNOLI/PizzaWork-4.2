#include <iostream>

using namespace std;

//Дана строка, состоящая из групп нулей и единиц.Каждая группа отделяется от
//другой одним или несколькими пробелами.Найти количество групп с пятью
//символами.

int findGroups(string mainString) {
	mainString += " ";
	int result = 0;
	int sizeMainString;
	int count = 0;
	for (sizeMainString = 0; sizeMainString < mainString[sizeMainString]; sizeMainString++);

	for (int i = 0; i < sizeMainString; i++) {
		if (mainString[i] != ' ') {
			count++;
		}
		else {
			if (count == 5) {
				result++;
			}
			count = 0;
		}
	}

	return result;
}

int main() {
	string str1 = "1234 123 12345 123456 123 12345";
	string str2 = "123 1234 123456789";
	string str3 = "1 12 123 1234 12345";
	string str4 = "12345 12345 12345 123";
	string str5 = "1 23 1234 123 12";

	cout << "Str1 " << findGroups(str1) << endl;
	cout << "Str2 " << findGroups(str2) << endl;
	cout << "Str3 " << findGroups(str3) << endl;
	cout << "Str4 " << findGroups(str4) << endl;
	cout << "Str5 " << findGroups(str5) << endl;
	return 0;
}