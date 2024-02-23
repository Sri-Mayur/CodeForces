#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, n;
        cin >> x >> n;

        // Calculate the maximum balance
        int maxBalance = gcd(x, n);

        cout << maxBalance << endl;
    }

    return 0;
}
