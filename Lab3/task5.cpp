#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, dx;
    int i, n;

    cout << "Print a, b, dx and n" << endl;
    cin >> a >> b >> dx >> n;

    if (dx <= 0 || a > b || n < 0) {          // ДОДАНО: перевірка даних
        cout << "Invalid input" << endl;
        return 1;
    }

    double x = a;

    while (x <= b) {
        if (x <= 0) {
            i = 0;
            double y = 0;
            while (i <= n) {
                y = y + pow((x - i), 2);
                i++;
            }
            cout << "x: " << x << " y: " << y << endl;   // ВИПРАВЛЕНО: пробіл
            x = x + dx;
        }
        else {
            i = 1;
            double y = 1;
            while (i <= n) {
                int j = 0;
                double prod = 1;
                while (j <= n - 1) {
                    prod = prod * (x - i - 2 * j);        // ВИПРАВЛЕНО: накопичення
                    j++;
                }
                y = y * prod;
                i++;
            }

            cout << "x: " << x << " y: " << y << endl;    // ВИПРАВЛЕНО: один рядок
            x = x + dx;
        }
    }

    return 0;
}