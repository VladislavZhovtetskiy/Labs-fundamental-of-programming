#include <iostream>
#include <cmath>

using namespace std;

int solveQuadratic(double a, double b, double c, double& x1, double& x2) {
    auto discriminant = [a, b, c]() {
        return b * b - 4 * a * c;
    };

    
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                return -1;   
            }
            return 0;       
        }
        x1 = -c / b;
        return 1;
    }

    double d = discriminant();

    if (d < 0) {
        return 0;
    }
    else if (d == 0) {
        x1 = -b / (2 * a);
        return 1;
    }

    x1 = (-b + sqrt(d)) / (2 * a);
    x2 = (-b - sqrt(d)) / (2 * a);
    return 2;
}

int main() {
    double a, b, c, x1, x2;

    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    int rootsCount = solveQuadratic(a, b, c, x1, x2);

    switch (rootsCount) {
    case -1:
        cout << "Infinitely many solutions" << endl;
        break;
    case 0:
        cout << "No solutions" << endl;
        break;
    case 1:
        cout << "x = " << x1 << endl;
        break;
    case 2:
        cout << "x1 = " << x1 << ", x2 = " << x2 << endl;
        break;
    }

    return 0;
}