
#include <iostream>
using namespace std;

int main() {
    int n = 35;
    int original = n;
    int sum = 0;

    while (n > 0) {
        int last_digit = n % 10;
        sum = sum + (last_digit * last_digit * last_digit);
        n = n / 10;
    }

    cout << sum << endl;

    if (sum == original) {
        cout << "Armstrong number" << endl;
    }
    else {
        cout << "Not Armstrong number" << endl;
    }

    return 0;
}
