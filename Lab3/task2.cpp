#include <iostream>

using namespace std;

int main() {
    double x;
    int n, k;                          
    double result = 0.0;
    cout << "Print x, n and k with spaces" << endl;

    cin >> x >> n >> k;

    for (int i = 1; i <= n; i++) {     
        if (i == k) {
            continue;
        }

        else {
            if ((x + 2 * i) == 0) {
                cout << "You can`t divide by zero" << endl;
                return 1;
            }

            else {
                result = result + i / (x + 2 * i);
            }
        }
    }

    cout << "Result is " << result << endl;
    return 0;
}