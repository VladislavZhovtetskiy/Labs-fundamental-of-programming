#include <iostream>

using namespace std;

// Одна функція з усталеними значеннями
int productDefault(int a = 1, int b = 1, int c = 1) {
    return a * b * c;
}

// Перевантажені функції 
int productOverload() {
    return 1;
}

int productOverload(int a) {
    return a;
}

int productOverload(int a, int b) {
    return a * b;
}

int productOverload(int a, int b, int c) {
    return a * b * c;
}

int main() {
    cout << "Default values:" << endl;
    cout << productDefault() << endl;           // 1
    cout << productDefault(4) << endl;          // 4
    cout << productDefault(4, 5) << endl;       // 20
    cout << productDefault(4, 5, 6) << endl;    // 120

    cout << "Overloading:" << endl;
    cout << productOverload() << endl;          // 1
    cout << productOverload(4) << endl;         // 4
    cout << productOverload(4, 5) << endl;      // 20
    cout << productOverload(4, 5, 6) << endl;   // 120

    return 0;
}