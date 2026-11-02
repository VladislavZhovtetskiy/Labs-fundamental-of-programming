#include <iostream>
using namespace std;

int main() {
    double x;
    cin >> x;
    int result = ((x >= 0 && x <= 2) || (x > 7 && x < 11)) ? 1 : 0;
    cout << result << endl;
    return 0;
}