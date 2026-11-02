#include <iostream>

using namespace std;

int minimum(int number) {
    static int min_number = number;

    if (min_number > number) {
        min_number = number;
    }

    return min_number;
}

int maximum(int number) {
    static int max_number = number;

    if (max_number < number) {
        max_number = number;
    }

    return max_number;
}



int main() {
    int number;

    while (true) {
        cout << "Print number: ";
        cin >> number;

        if (number == 0)
            break;

        cout << "Minimum is: " << minimum(number) << endl;
        cout << "Maximum is: " << maximum(number) << endl;
    }

    return 0;
}