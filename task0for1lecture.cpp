#include <iostream>

using namespace std;


int num() {
    int var, kol, it;
    cout << "������� ���� �������: ";
    cin >> var;
    cout << "������� ����� ���������: ";
    cin >> kol;
    it = var % kol + 1;
    return it;
}


int main()
{
    setlocale(LC_ALL, "rus");
    cout << num();

}