#include <iostream>
#include <string>

using namespace std;

void revstr(string& str, int start, int end) {
	if (start >= end) {//±âº» »ç·Ê
		return;
	}
	else {
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		revstr(str, start + 1, end - 1);
	}
}




int main() {
	string str;
	cout << "enter a string: ";
	cin >> str;
	revstr(str, 0, str.length()-1);
	cout << "reversed string: " << str << endl;
	return 0;
}