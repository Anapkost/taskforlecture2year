#include <iostream>

using namespace std;


int num() {
    int var, kol, it;
    cout << "¬ведите свой вариант: ";
    cin >> var;
    cout << "¬ведите число вариантов: ";
    cin >> kol;
    it = var % kol + 1;
    return it;
}


int main()
{
    setlocale(LC_ALL, "rus");
    cout << num();

}