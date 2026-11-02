#include <iostream>
using namespace std;

int main() {
    int k;
    double y;
    cin >> k;

    y = ((1.0 / k) + (1.0 / (k * k)) + (1.0 / (k * k * k)));
    cout << y << endl;
    return 0;
}