#include <iostream>
using namespace std;

int itog() {
    int kol, b;
    char a;
    cin >> a >> kol;
    b = (int)a % kol + 1;
    return b;
}

int main() {
    cout << itog();
}


