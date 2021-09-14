#include <iostream>
#include <string>
using namespace std;


class FooString {
	char* buf;
public:
	FooString(char* tbuf);
	~FooString();
	void show();
	int length();
	void TestLength();
};

FooString::FooString(char* tbuf) {
	this->buf = tbuf;
}

int FooString::length() {
	int ch = 0;
	while (buf[ch] != '\0') {
		ch++;
	};
	cout << ch << '\n';
	return ch;
}

void FooString::show() {
	cout << buf << '\n';
}

void FooString::TestLength() {
	int p = 5;
	if (length() == p) {
		return 0;
	}
	else {
		return -1;
	}
}

int main() {
	char str[100] = "12345";
	FooString prim(str);
	prim.show();
	prim.length();
	prim.TestLength();
}