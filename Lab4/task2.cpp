#include <iostream>

using namespace std;

double product(double x, int n) {

    if (n <= 0) {
        return 1;
    }

    else {
        return (x + n) * product(x, n - 1);
    }

}

int main() {
    double x;
    int n;

    cout << "Print x and n: " << endl;
    cin >> x >> n;

    cout << "Product is: " << product(x, n);
    return 0;
}

