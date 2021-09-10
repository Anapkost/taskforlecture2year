#include <iostream>
#include "strutil.h"
using namespace std;

int main() {
	char c1[100], c2[200];
	cin >> c1 >> c2;

	cout << strConteins(c1, c2);
	return 0;
}