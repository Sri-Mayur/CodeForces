#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int t, a, b, res;
    cin >> t;

    while (t--) {
        cin >> a >> b;

        if (a == 1 || b == 1) {
            
            res = (a == 1) ? (b * b) : (a * a);
        } else {
            res = lcm(a, b);
        }

        cout << res << endl;
    }
    return 0;
}
