#include <iostream>

using namespace std;

int main() {
    double eps, y = 0;
    double x = 0.5;      // поточний доданок, перший член ряду 1/2

    cout << "Enter epsilon: ";
    cin >> eps;

    if (eps <= 0) {
        cout << "Invalid input: eps must be positive" << endl;
        return 0;
    }

    while (x >= eps) {   // ВИПРАВЛЕНО: >=, а не >
        y = y + x;
        x = x * 0.5;
    }
    cout << "Sum: " << y << endl;
    return 0;
}