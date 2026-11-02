#include <iostream>

using namespace std;

// Зчитування даних: x і n повертаються через посилання,
// а результат (true/false) каже, чи дані коректні
bool readData(double& x, int& n) {
    cout << "Enter x and n: ";
    cin >> x >> n;
    if (n < 0) {
        cerr << "n must be non-negative" << endl;
        return false;
    }
    return true;
}

// Функція за індивідуальним завданням
double y(double x, int n) {
    if (x <= 0) {
        // сума (x - i)^2 для i від 0 до n
        double sum = 0;
        for (int i = 0; i <= n; i++) {
            sum += (x - i) * (x - i);
        }
        return sum;
    }
    else {
        // подвійний добуток: i від 1 до n, j від 0 до n-1
        double product = 1;
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= n - 1; j++) {
                product *= (x - i - 2 * j);
            }
        }
        return product;
    }
}

int main() {
    double x;
    int n;

    if (readData(x, n)) {
        cout << "y = " << y(x, n) << endl;
        return 0;
    }
    return -1;
}