
#include <iostream>
using namespace std;

int main() {
    int n = 100;

    for (int num = 2; num <= n; num++) {
        int count = 0;

        for (int i = 1; i * i <= num; i++) {
            if (num % i == 0) {
                count++;

                if (i != num / i) {
                    count++;
                }
            }
        }

        if (count == 2) {
            cout << num << " ";
        }
    }

    return 0;
}
