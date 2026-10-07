#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // Upper half
    for (int i = 1; i <= n; i++) {

        // Left stars
        for (int j = 1; j <= n - i + 1; j++) {
            cout << "*";
        }

        // Spaces
        for (int j = 1; j < 2 * i; j++) {
            cout << " ";
        }

        // Right stars
        for (int j = 1; j <= n - i + 1; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {

        // Left stars
        for (int j = 1; j <= n - i + 1; j++) {
            cout << "*";
        }

        // Spaces
        for (int j = 1; j < 2 * i; j++) {
            cout << " ";
        }

        // Right stars
        for (int j = 1; j <= n - i + 1; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
