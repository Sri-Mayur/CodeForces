#include <iostream>
#include <vector>
using namespace std;

void solution(int n, int k) {
    vector<int> v;
    int mul = 1;  // Initialize mul to 1

    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;
        mul *= input;
        v.push_back(input);
    }

    if (mul == 0 || 2023 % mul != 0) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        cout << 2023 / mul << " ";

        k = k - 1;

        while (k--) {
            cout << 1 << " ";
        }
        cout << endl;  // Add a newline after the output
    }
}

int main() {
    int t, n, k;
    cin >> t;

    while (t--) {
        cin >> n >> k;
        solution(n, k);
    }

    return 0;
}
