#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, coin = 0;
        cin >> n;

        string s;
        cin >> s;

        for (int i = 0; i < n; i++) {
            if (s[i] == '@') {
                coin++;
            } else if (s[i] == '*' && s[i + 1] == '*') {
                break;
            }
        }
        cout << coin << endl;
    }

    return 0;
}
