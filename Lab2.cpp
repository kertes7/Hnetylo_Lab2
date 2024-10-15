#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    for (int i = 1; i <= 5; i++) {
        cout << "Квадрат " << i << " = " << i * i << endl;
    }

    return 0;
}
