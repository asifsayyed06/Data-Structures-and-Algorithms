#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int space = 2 * n - 2;

    for (int i = 1; i <= n; i++) {

        // Increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        // Spaces
        for (int j = 1; j <= space; j++) {
            cout << " ";
        }

        // Decreasing numbers
        for (int j = i; j >= 1; j--) {
            cout << j;
        }

        cout << endl;

        space -= 2;
    }

    return 0;
}
