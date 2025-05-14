#include<iostream>
#include<string>
#include<cctype>

using namespace std;
bool func(string str) {
	if (str.length() != 15) {
		return 0;
	}
	if (str[5] != '-' || str[13] != '-')
		return 0;
	for (int i = 0; i < str.length(); i++)
	{

		if (i==5  || i==13 )
			continue;
		if (!isdigit(str[i])) {
			return 0;
		}
	}
	return 1;
}
int main() {
	cout << func("12345-1234567-") << endl;
	cout << func("12345-123456771") << endl;
	cout << func("12345-1234567-a") << endl;
	cout << func("12345-1234567-8") << endl;
}