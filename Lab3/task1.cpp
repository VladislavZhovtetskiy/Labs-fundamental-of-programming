#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    cout << "Enter a, b and c separated by spaces: " << endl;
    cin >> a >> b >> c;

    if (a == 0) {
        // рівняння виродилося в лінійне: bx + c = 0
        if (b != 0) {
            double x = -c / b;
            if (x == 0) {
                x = 0;                 // прибирає виведення "-0"
            }
            cout << "x = " << x << endl;
        }
        else {
            if (c == 0) {
                cout << "Infinite number of solutions" << endl;
            }
            else {
                cout << "No roots" << endl;
            }
        }
    }
    else {
        // квадратне рівняння
        double d = b * b - 4 * a * c;
        if (d < 0) {
            cout << "No roots" << endl;
        }
        else if (d == 0) {
            double x = -b / (2 * a);
            if (x == 0) {
                x = 0;
            }
            cout << "x = " << x << endl;
        }
        else {
            double x1 = (-b - sqrt(d)) / (2 * a);
            double x2 = (-b + sqrt(d)) / (2 * a);
            if (x1 > x2) {             // при a < 0 корені виходять у зворотному порядку
                double temp = x1;
                x1 = x2;
                x2 = temp;
            }
            if (x1 == 0) {
                x1 = 0;
            }
            if (x2 == 0) {
                x2 = 0;
            }
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
    }
    return 0;
}