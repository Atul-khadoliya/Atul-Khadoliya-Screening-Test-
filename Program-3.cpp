#include <iostream>
using namespace std;

int main() {
    long long a;
    if (!(cin >> a)) return 0;

    // handle small a values safely
    if (a <= 0) {
        cout << "\n";
        return 0;
    }

    long long limit;
    if (a % 2 == 1) {
        limit = 2 * a - 1;
    } else {
        limit = 2 * a - 3;
    }

    bool first = true;
    for (long long x = 1; x <= limit; x += 2) {
        if (!first) cout << ", ";
        cout << x;
        first = false;
    }
    cout << "\n";
    return 0;
}
