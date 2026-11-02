#include <iostream>

using namespace std;

int main() {
    double x;
    int n;
    double y = 1;

    cout << "Enter x and n separated by a space: " << endl;
    cin >> x >> n;

    if (n < 0) {
        cout << "Invalid input: n must be a non-negative integer" << endl;
        return 0;
    }
    else {
        for (int i = 1; i <= 2 * n; i++) {
            if (i % 2 == 1) {
                y = y * (x + i);
            }
            else {
                y = y * (x - i);
            }
        }
    }
    cout << "y = " << y << endl;
    return 0;
}