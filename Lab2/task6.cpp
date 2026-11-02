#include <iostream>
using namespace std;

int main() {
    double x;
    cin >> x;

    double y = x < 0 ? 1 / x + 1 / (x * x * x * x)
             : (x <= 1 ? x - (x * x * x)
             : (x + 3) * (x * x + 4));

    cout << y << endl;
    return 0;
}