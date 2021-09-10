#include <string>

int strConteins(char* a, char* str) {
	int p = -1;
	int i = 0, l = 0;
	while (i < strlen(str)) {
		if (str[i] == a[0]) {
			p = i;
			for (l = 1; l < strlen(a); l++) {
				i++;
				if (a[l] != str[i]) {
					p = -1;
					break;
				}
			}

		}
		i++;
		if (p != -1)
			break;
	}
	p++;
	return p;
}